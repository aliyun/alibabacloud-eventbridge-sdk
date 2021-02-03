package com.aliyun.eventbridge.util;

import java.nio.charset.Charset;

public class EBConstants {

    /**
     * CloudEvents attribute "datacontenttype" default value
     */
    public static final String DEFAULT_DATA_CONTENT_TYPE = "application/json;charset=utf-8";
    /**
     * CloudEvents attribute "specversion" default value
     */
    public static final String DEFAULT_SPEC_VERSION = "1.0";

    /**
     * CloudEvents extension attribute: aliyunpublishtime
     */
    public static final String EXTENSION_PUBLISHTIME = "aliyunpublishtime";
    /**
     * CloudEvents extension attribute: aliyuneventbus
     */
    public static final String EXTENSION_EVENTBUSNAME = "aliyuneventbusname";

    /**
     * the default charset
     */
    public static final Charset DEFAULT_CHARSET = Charset.forName("UTF-8");

}
