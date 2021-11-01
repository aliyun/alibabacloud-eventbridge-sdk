// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridgeutil;

import com.aliyun.eventbridgeutil.exception.EventBridgeException;
import com.aliyun.tea.*;
import javax.crypto.Mac;
import com.aliyun.tea.TeaRequest;
import javax.crypto.spec.SecretKeySpec;
import javax.xml.bind.DatatypeConverter;
import java.util.*;
import com.aliyun.tea.utils.StringUtils;


public class Client {

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
            return DatatypeConverter.printBase64Binary(signData);
        } catch (Exception e) {
            throw new EventBridgeException(e.getMessage(), e);
        }

    }

    public static Object encodeData(Object o) {
        if (null == o || !List.class.isAssignableFrom(o.getClass())) {
            return o;
        }
        try {
            List list = (List) o;
            Map<String, Object> map;
            byte[] bytes;
            String data;
            Object result;
            String contentType;
            List<Map<String, Object>> resultList = new ArrayList<>();
            for (Object object : list) {
                map = (Map<String, Object>) object;
                contentType = String.valueOf(map.get("datacontenttype"));
                if ("application/json".equalsIgnoreCase(contentType) ||
                        "text/json".equalsIgnoreCase(contentType)) {
                    continue;
                }
                result = map.remove("data");
                if (null == result) {
                    continue;
                }
                bytes = (byte[]) result;
                data = DatatypeConverter.printBase64Binary(bytes);
                map.put("data_base64", data);
                resultList.add(map);
            }
            return resultList;
        } catch (Exception e) {
            e.printStackTrace();
            return o;
        }
    }

    /**
     * Serialize events
     * @param events the object
     * @return the result
     */
    public static Object serialize(Object events) {
        List<TeaModel> listModel = (List<TeaModel>)events;
        List<Map<String, Object>> listMap = new ArrayList<Map<String, Object>>();
        Map<String, Object> map;
        String datacontenttype;
        Object data;
        Object extensions;
        Set<String> keys;
        for (TeaModel teaModel: listModel) {
            map = teaModel.toMap();
            datacontenttype = String.valueOf(map.get("datacontenttype"));
            data = map.get("data");
            keys = map.keySet();
            for (String key: keys) {
                if (null == map.get(key)) {
                    map.remove(key);
                }
            }
            if (!"application/json".equalsIgnoreCase(datacontenttype) &&
                    !"text/json".equalsIgnoreCase(datacontenttype) && null != data) {
                map.put("data_base64", data);
                map.remove("data");
            }
            if (map.containsKey("extensions")) {
                extensions = map.remove("extensions");
                if (null != extensions) {
                    map.putAll((Map<String, Object>) extensions);
                }
                listMap.add(map);
            }
        }
        return listMap;
    }
}
