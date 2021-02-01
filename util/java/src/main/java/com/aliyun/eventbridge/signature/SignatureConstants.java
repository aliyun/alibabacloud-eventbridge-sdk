package com.aliyun.eventbridge.signature;

import java.nio.charset.Charset;
import java.util.Set;

import com.google.common.collect.Sets;

public class SignatureConstants {
    /**
     * Default charset
     */
    public static final Charset DEFAULT_CHARSET = Charset.forName("UTF-8");

    /**
     * the current timestamp, If the receiver exceeds 60 seconds, it is considered expired.
     */
    public static String HEADER_X_EVENTBRIDGE_SIGNATURE_TIMESTAMP = "x-eventbridge-signature-timestamp";
    /**
     * the algorithm of signature, default is HMAC-SHA1
     */
    public static String HEADER_X_EVENTBRIDGE_SIGNATURE_METHOD = "x-eventbridge-signature-method";
    /**
     * the version of signature
     */
    public static String HEADER_X_EVENTBRIDGE_SIGNATURE_VERSION = "x-eventbridge-signature-version";

    /**
     * the url of public pem
     */
    public static String HEADER_X_EVENTBRIDGE_SIGNATURE_URL = "x-eventbridge-signature-url";
    /**
     * it is used to  increase the security of  signatures
     */
    public static String HEADER_X_EVENTBRIDGE_SIGNATURE_TOKEN = "x-eventbridge-signature-token";
    /**
     * the temporary secret， which encrypted by EB with a private pem
     */
    public static String HEADER_X_EVENTBRIDGE_SIGNATURE_SECRET = "x-eventbridge-signature-secret";

    /**
     * the signature of eventbridge http push
     */
    public static String HEADER_X_EVENTBRIDGE_SIGNATURE = "x-eventbridge-signature";

    /**
     * the separator of stringToSign
     */
    public static String SEPARATOR_OF_STRING_TO_SIGN = "\n";

    /**
     * the expire time of signature is 60000ms
     */
    public static int SIGNATURE_EXPIRE_TIME = 60000;

    /**
     * the switch of check timestamp
     */
    public static String EB_SWITCH_CHECK_TIMESTAMP = "EB_SWITCH_CHECK_TIMESTAMP";

    /**
     * the support signature methods sets.
     */
    public static Set<String> SUPPORT_SIGNATURE_METHODS = Sets.newHashSet("HMAC-SHA1");

}
