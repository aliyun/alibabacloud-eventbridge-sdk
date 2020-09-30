// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.base;

import com.aliyun.tea.*;
import com.aliyun.tea.utils.StringUtils;
import com.google.common.io.BaseEncoding;

import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;
import java.util.*;


public class EventBridgeUtil {

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
            throw new EventBridgeUtilException(e);
        }
    }

    /**
     * Serialize events
     * @param events the object
     * @return the result
     */
    public static Object serialize(Object events) {
        if (null == events || !List.class.isAssignableFrom(events.getClass())) {
            return events;
        }
        try {
            List list = (List)events;
            Map<String, Object> map;
            byte[] bytes;
            String data;
            Object result;
            String contentType;
            List<Map<String, Object>> resultList = new ArrayList<>();
            for (Object object : list) {
                if (TeaModel.class.isAssignableFrom(object.getClass())) {
                    map = ((TeaModel)object).toMap();
                } else {
                    map = (Map<String, Object>)(object);
                }
                contentType = String.valueOf(map.get("datacontenttype"));
                if (contentType.startsWith("application/json") || contentType.startsWith("text/json")) {
                    result = map.remove("data");
                    if (null != result) {
                        bytes = (byte[])result;
                        String str = new String(bytes);
                        map.put("data", str);
                    }
                } else {
                    result = map.remove("data");
                    if (null != result) {
                        bytes = (byte[])result;
                        data = BaseEncoding.base64().encode(bytes);
                        map.put("data_base64", data);
                    }
                }
                result = map.remove("extensions");
                if (null == result) {
                    resultList.add(map);
                    continue;
                }

                Map<String, Object> extensions = (Map<String, Object>)result;
                for (Map.Entry<String, Object> entry : extensions.entrySet()) {
                    map.put(entry.getKey(), entry.getValue());
                }
                resultList.add(map);
            }
            return resultList;
        } catch (Exception e) {
            e.printStackTrace();
            return events;
        }
    }

    /**
     * Judge if the  origin is start with the prefix
     * @param origin the original string
     * @param prefix the prefix string
     * @return the result
     */
    public static Boolean startWith(String origin, String prefix) {
        if (origin == prefix) {
            return true;
        }
        if (null == origin) {
            return false;
        }
        return origin.startsWith(prefix);
    }
}
