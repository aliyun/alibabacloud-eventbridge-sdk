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
     * Error code:ServiceNotEnabled
     */
    public static final String SERVICE_NOT_ENABLED_CODE = "ServiceNotEnabled";
    /**
     * Error Message:ServiceNotEnabled
     */
    public static final String SERVICE_NOT_ENABLED_MESSAGE
        = "The OwnerId that your Access Key Id associated to has not enabled.";
    /**
     * the default charset
     */
    public static final Charset DEFAULT_CHARSET = Charset.forName("UTF-8");

}
