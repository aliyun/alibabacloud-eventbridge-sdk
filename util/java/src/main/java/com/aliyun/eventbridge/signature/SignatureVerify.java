package com.aliyun.eventbridge.signature;

import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.PublicKey;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.Mac;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;
import javax.crypto.spec.SecretKeySpec;
import javax.xml.bind.DatatypeConverter;

import com.google.common.base.Strings;
import org.apache.http.Header;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import static com.aliyun.eventbridge.signature.SignatureConstants.DEFAULT_CHARSET;
import static com.aliyun.eventbridge.signature.SignatureConstants.EB_SWITCH_CHECK_TIMESTAMP;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_METHOD;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_SECRET;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_TIMESTAMP;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_URL;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_VERSION;
import static com.aliyun.eventbridge.signature.SignatureConstants.SIGNATURE_EXPIRE_TIME;
import static com.aliyun.eventbridge.signature.SignatureConstants.SUPPORT_SIGNATURE_METHODS;

public class SignatureVerify {

    private static Logger logger = LoggerFactory.getLogger(SignatureVerify.class);

    /**
     * Verify the request signature
     *
     * @param urlWithQueryString
     * @param headers
     * @param body
     *
     * @return
     */
    public static boolean verify(String urlWithQueryString, List<Header> headers, byte[] body) {
        Map<String, String> headerMap = toHeaderMap(headers);
        if (!checkParam(urlWithQueryString, headerMap)) {
            return Boolean.FALSE;
        }
        String encryptedSecret = headerMap.get(HEADER_X_EVENTBRIDGE_SIGNATURE_SECRET);
        String sign = headerMap.get(HEADER_X_EVENTBRIDGE_SIGNATURE);

        PublicKey publicKey = PublicKeyBuilder.buildPublicKey(headerMap.get(HEADER_X_EVENTBRIDGE_SIGNATURE_URL));
        String decryptSecret = decrypt(publicKey, encryptedSecret);
        String stringToSign = StringToSignBuilder.defaultStringToSign(urlWithQueryString, headerMap, body);
        String combaredSignature = signByHmacSHA1(stringToSign, decryptSecret);
        if (combaredSignature.equals(sign)) {
            return Boolean.TRUE;
        } else {
            return Boolean.FALSE;
        }
    }

    private static boolean checkParam(String urlWithQueryString, Map<String, String> headerMap) {
        if (Strings.isNullOrEmpty(urlWithQueryString)) {
            throw new RuntimeException("The url With query string is null or empty!");
        }
        if (!headerMap.containsKey(HEADER_X_EVENTBRIDGE_SIGNATURE_TIMESTAMP)) {
            throw new RuntimeException("The timestamp of header is null or empty!");
        }

        if (!headerMap.containsKey(HEADER_X_EVENTBRIDGE_SIGNATURE_METHOD)) {
            throw new RuntimeException("The signature method of header is null or empty!");
        }

        if (!headerMap.containsKey(HEADER_X_EVENTBRIDGE_SIGNATURE_VERSION)) {
            throw new RuntimeException("The signature version of header is null or empty!");
        }

        if (!headerMap.containsKey(HEADER_X_EVENTBRIDGE_SIGNATURE_URL)) {
            throw new RuntimeException("The signature url of header is null or empty!");
        }

        if (!SUPPORT_SIGNATURE_METHODS.contains(headerMap.get(HEADER_X_EVENTBRIDGE_SIGNATURE_METHOD))) {
            throw new RuntimeException("The signature method not support, please upgrade to the latest version.");
        }

        if (Strings.isNullOrEmpty(System.getProperty(EB_SWITCH_CHECK_TIMESTAMP))) {
            if (System.currentTimeMillis() - Long.parseLong(headerMap.get(HEADER_X_EVENTBRIDGE_SIGNATURE_TIMESTAMP))
                >= SIGNATURE_EXPIRE_TIME) {
                throw new RuntimeException(
                    "The request is expired. which time is " + headerMap.get(HEADER_X_EVENTBRIDGE_SIGNATURE_TIMESTAMP));
            }
        }
        return Boolean.TRUE;
    }

    /**
     * convert header list to header map
     *
     * @param headers
     *
     * @return
     */
    public static Map<String, String> toHeaderMap(List<Header> headers) {
        Map<String, String> headerMap = new HashMap<>();
        if (headers == null || headers.isEmpty()) {
            return headerMap;
        }
        for (Header header : headers) {
            headerMap.put(header.getName(), header.getValue());
        }
        return headerMap;
    }

    /**
     * Decrypt the encryptStr with the publicKey (same with privatekey)
     *
     * @param publicKey
     * @param encryptStr
     *
     * @return
     *
     * @throws NoSuchPaddingException
     * @throws NoSuchAlgorithmException
     * @throws InvalidKeyException
     * @throws BadPaddingException
     * @throws IllegalBlockSizeException
     */
    public static String decrypt(PublicKey publicKey, String encryptStr) {
        byte[] decryptCode = null;
        try {
            Cipher cipher = Cipher.getInstance("RSA");
            cipher.init(Cipher.DECRYPT_MODE, publicKey);
            byte[] decodeByte = DatatypeConverter.parseBase64Binary(encryptStr);
            decryptCode = cipher.doFinal(decodeByte);
        } catch (InvalidKeyException | IllegalBlockSizeException | BadPaddingException | NoSuchAlgorithmException | NoSuchPaddingException e) {
            throw new RuntimeException("Decrypt encryptStr failed. which is " + encryptStr, e);
        }
        return new String(decryptCode);
    }

    /**
     * sign from secret
     *
     * @param content
     * @param secret
     *
     * @return
     *
     * @throws Exception
     */
    public static String signByHmacSHA1(String content, String secret) {
        try {
            byte[] data = secret.getBytes(DEFAULT_CHARSET);
            SecretKey secretKey = new SecretKeySpec(data, "HmacSHA1");
            Mac mac = Mac.getInstance("HmacSHA1");
            mac.init(secretKey);
            byte[] text = content.getBytes(DEFAULT_CHARSET);
            return DatatypeConverter.printBase64Binary(mac.doFinal(text));
        } catch (NoSuchAlgorithmException | InvalidKeyException e) {
            throw new RuntimeException("Encrypt content with secret failed. which content is " + content, e);
        }
    }
}
