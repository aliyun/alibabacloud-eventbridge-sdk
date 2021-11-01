// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.util;

//import java.util.ArrayList;
//import java.util.List;
//import java.util.Map;
import java.util.*;

import com.aliyun.tea.TeaModel;
import com.google.common.io.BaseEncoding;

public class Serializer {

    /**
     * serialize object before transmission
     *
     * @param o
     *
     * @return
     */
    public static Object serialize(Object o) {
        if (null == o || !List.class.isAssignableFrom(o.getClass())) {
            return o;
        }
        try {
            List list = (List)o;
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
            return o;
        }
    }
}
