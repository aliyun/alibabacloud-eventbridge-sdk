package com.aliyun.eventbridge.util;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

import com.aliyun.tea.TeaRequest;
import com.aliyun.tea.utils.StringUtils;
import com.google.common.io.BaseEncoding;

public class SignatureHelper {
    /**
     * Get the string to be signed according to request
     * @param request  which contains signed messages
     * @return the signed string
     */
    public static String getStringToSign(TeaRequest request) {
        String method = request.method;
        String pathname = request.pathname;
        Map<String, String> headers = request.headers;
        Map<String, String> query = request.query;
        String contentMD5 = headers.get("content-md5") == null ? "" : headers.get("content-md5");
        String contentType = headers.get("content-type") == null ? "" : headers.get("content-type");
        String date = headers.get("date") == null ? "" : headers.get("date");
        String header = method + "\n" + contentMD5 + "\n" + contentType + "\n" + date + "\n";
        String canonicalizedHeaders = getCanonicalizedHeaders(headers);
        String canonicalizedResource = getCanonicalizedResource(pathname, query);
        String stringToSign = header + canonicalizedHeaders + canonicalizedResource;
        return stringToSign;
    }

    protected static String getCanonicalizedHeaders(Map<String, String> headers) {
        String prefix = "x-acs";
        Set<String> keys = headers.keySet();
        List<String> canonicalizedKeys = new ArrayList<>();
        for (String key : keys) {
            if (key.startsWith(prefix)) {
                canonicalizedKeys.add(key);
            }
        }
        String[] canonicalizedKeysArray = canonicalizedKeys.toArray(new String[canonicalizedKeys.size()]);
        Arrays.sort(canonicalizedKeysArray);
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < canonicalizedKeysArray.length; i++) {
            String key = canonicalizedKeysArray[i];
            result.append(key);
            result.append(":");
            result.append(headers.get(key).trim());
            result.append("\n");
        }
        return result.toString();
    }

    protected static String getCanonicalizedResource(String pathname, Map<String, String> query) {
        String[] keys = query.keySet().toArray(new String[query.size()]);
        if (keys.length <= 0) {
            return pathname;
        }
        Arrays.sort(keys);
        StringBuilder result = new StringBuilder(pathname);
        result.append("?");
        String key;
        String value;
        for (int i = 0; i < keys.length; i++) {
            key = keys[i];
            result.append(key);
            value = query.get(key);
            if (!StringUtils.isEmpty(value) && !"".equals(value.trim())) {
                result.append("=");
                result.append(value);
            }
            result.append("&");
        }
        return result.deleteCharAt(result.length() - 1).toString();
    }

    /**
     * Get signature according to stringToSign, secret
     * @param stringToSign  the signed string
     * @param secret accesskey secret
     * @return the signature
     */
    public static String getSignature(String stringToSign, String secret) {
        try {
            Mac mac = Mac.getInstance("HmacSHA1");
            mac.init(new SecretKeySpec(secret.getBytes("UTF-8"), "HmacSHA1"));
            byte[] signData = mac.doFinal(stringToSign.getBytes("UTF-8"));
            return BaseEncoding.base64().encode(signData);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }
}
