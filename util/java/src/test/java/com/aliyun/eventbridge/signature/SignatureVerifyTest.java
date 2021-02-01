package com.aliyun.eventbridge.signature;

import java.util.ArrayList;

import com.google.common.collect.Lists;
import org.apache.http.Header;
import org.apache.http.message.BasicHeader;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.ExpectedException;

import static com.aliyun.eventbridge.signature.SignatureConstants.EB_SWITCH_CHECK_TIMESTAMP;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_METHOD;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_SECRET;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_TIMESTAMP;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_URL;
import static com.aliyun.eventbridge.signature.SignatureConstants.HEADER_X_EVENTBRIDGE_SIGNATURE_VERSION;

public class SignatureVerifyTest {

    @Rule
    public ExpectedException thrown = ExpectedException.none();

    private String urlWithQueryString;
    private ArrayList<Header> headers;
    private byte[] body;

    @Before
    public void init() {
        urlWithQueryString = "http://127.0.0.1:8080/cloudevents";
        headers = Lists.newArrayList();
        headers.add(new BasicHeader(HEADER_X_EVENTBRIDGE_SIGNATURE_TIMESTAMP, "1612167546574"));
        headers.add(new BasicHeader(HEADER_X_EVENTBRIDGE_SIGNATURE_METHOD, "HMAC-SHA1"));
        headers.add(new BasicHeader(HEADER_X_EVENTBRIDGE_SIGNATURE_URL,
            "https://cn-hangzhou-eventbridge.oss-cn-hangzhou.aliyuncs.com/x509_public_certificate_2021012101.pem"));
        headers.add(new BasicHeader(HEADER_X_EVENTBRIDGE_SIGNATURE_VERSION, "1.0"));
        headers.add(new BasicHeader(HEADER_X_EVENTBRIDGE_SIGNATURE_SECRET,
            "IVmo9s1qRamopH4Ei5ZQKmVYHJ01yoOYuCTQbc4ENtINM1Gwy+x2goGfXl+NhpE6P8xgL01A"
                + "/vwOn4anzVlhsvmBkkzRwbXqaYmcP44Of7nHMIfAUDeS9d0ftVOEJlPh8SmxUjUvcf4neLkkv9fgjqYjKEOEPGhLMvkyx1EKB"
                + "+4="));
        headers.add(new BasicHeader(HEADER_X_EVENTBRIDGE_SIGNATURE, "okK0HtfrD9y1xX0UuhKxR0DILgc="));
        body = "Data is data1, constant is Please deal with it timely.".getBytes();
    }

    @Test
    public void testVerify_Success() {
        System.setProperty(EB_SWITCH_CHECK_TIMESTAMP, Boolean.FALSE.toString());
        Assert.assertTrue(SignatureVerify.verify(urlWithQueryString, headers, body));
    }

    @Test
    public void testVerify_Failed() {
        body = "Falsified data.".getBytes();
        System.setProperty(EB_SWITCH_CHECK_TIMESTAMP, Boolean.FALSE.toString());
        Assert.assertFalse(SignatureVerify.verify(urlWithQueryString, headers, body));
    }

    @Test
    public void testVerify_TimeExpired() {
        thrown.expectMessage("The request is expired. which time is 1612167546574");
        SignatureVerify.verify(urlWithQueryString, headers, body);
    }
}