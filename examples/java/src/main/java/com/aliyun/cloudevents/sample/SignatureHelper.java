package com.aliyun.cloudevents.sample;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Base64;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

import io.netty.util.internal.StringUtil;
import io.vertx.core.MultiMap;
import io.vertx.core.http.HttpClientRequest;

public class SignatureHelper {

    public static String getStringToSign(HttpClientRequest request) {
        String method = request.method()
            .name();
        String pathname = request.path();
        MultiMap headers = request.headers();
        Map<String, String> query = buildQueryMap(request.query());
        String contentMD5 = headers.get("content-md5") == null ? "" : (String)headers.get("content-md5");
        String contentType = headers.get("content-type") == null ? "" : (String)headers.get("content-type");
        String date = headers.get("date") == null ? "null" : (String)headers.get("date");
        String header = method + "\n" + contentMD5 + "\n" + contentType + "\n" + date + "\n";
        String canonicalizedHeaders = getCanonicalizedHeaders(headers);
        String canonicalizedResource = getCanonicalizedResource(pathname, query);
        String stringToSign = header + canonicalizedHeaders + canonicalizedResource;
        return stringToSign;
    }

    private static Map<String, String> buildQueryMap(String query) {
        Map<String, String> map = new HashMap<>();
        if (!StringUtil.isNullOrEmpty(query)) {
            String[] params = query.split("&");
            Arrays.stream(params)
                .forEach(param -> {
                    String[] kv = param.split("=");
                    map.put(kv[0], kv[1]);
                });
        }
        return map;
    }

    protected static String getCanonicalizedHeaders(MultiMap headers) {
        String prefix = "x-eventbridge";
        Set<String> keys = headers.names();
        List<String> canonicalizedKeys = new ArrayList();
        Iterator var4 = keys.iterator();

        while (var4.hasNext()) {
            String key = (String)var4.next();
            if (key.startsWith(prefix)) {
                canonicalizedKeys.add(key);
            }
        }
        String[] canonicalizedKeysArray = (String[])canonicalizedKeys.toArray(new String[canonicalizedKeys.size()]);
        Arrays.sort(canonicalizedKeysArray);
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < canonicalizedKeysArray.length; ++i) {
            String key = canonicalizedKeysArray[i];
            result.append(key);
            result.append(":");
            result.append(((String)headers.get(key)).trim());
            result.append("\n");
        }

        return result.toString();
    }

    protected static String getCanonicalizedResource(String pathname, Map<String, String> query) {
        String[] keys = (String[])query.keySet()
            .toArray(new String[query.size()]);
        if (keys.length <= 0) {
            return pathname;
        } else {
            Arrays.sort(keys);
            StringBuilder result = new StringBuilder(pathname);
            result.append("?");

            for (int i = 0; i < keys.length; ++i) {
                String key = keys[i];
                result.append(key);
                String value = (String)query.get(key);
                if (!StringUtil.isNullOrEmpty(value) && !"".equals(value.trim())) {
                    result.append("=");
                    result.append(value);
                }

                result.append("&");
            }
            return result.deleteCharAt(result.length() - 1)
                .toString();
        }
    }

    public static String getSignature(String stringToSign, String secret) throws Exception {
        Mac mac = Mac.getInstance("HmacSHA1");
        mac.init(new SecretKeySpec(secret.getBytes("UTF-8"), "HmacSHA1"));
        byte[] signData = mac.doFinal(stringToSign.getBytes("UTF-8"));
        return Base64.getEncoder()
            .encodeToString(signData);
    }
}
