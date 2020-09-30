package com.aliyun.eventbridge.util;

import java.util.HashSet;
import java.util.Set;

public enum CommonStatus {
    ENABLE(1, "enable"),

    DISABLE(2, "disable");

    private Integer code;
    private String key;

    private static final Set<Integer> CODESET = new HashSet<>();

    static {
        CODESET.add(ENABLE.code);
        CODESET.add(DISABLE.code);
    }

    CommonStatus(Integer code, String key) {
        this.code = code;
        this.key = key;
    }

    public Integer getCode() {
        return code;
    }

    public static CommonStatus valueOfName(String name) {
        for (CommonStatus status : CommonStatus.values()) {
            if (status.key.equalsIgnoreCase(name)) {
                return status;
            }
        }
        return null;
    }

    public String getKey() {
        return key;
    }

    public static Integer validate(Integer code) {
        if (CODESET.contains(code)) {
            return code;
        } else {
            return ENABLE.code;
        }
    }

    public static CommonStatus getStatus(Integer code) {
        for (CommonStatus value : CommonStatus.values()) {
            if (value.getCode() == code) {
                return value;
            }
        }
        return null;
    }
}
