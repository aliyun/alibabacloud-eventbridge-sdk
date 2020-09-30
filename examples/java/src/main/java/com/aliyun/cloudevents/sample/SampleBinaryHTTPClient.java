package com.aliyun.cloudevents.sample;

import java.net.URI;
import java.util.UUID;

import io.cloudevents.CloudEvent;
import io.cloudevents.core.builder.CloudEventBuilder;
import io.cloudevents.http.vertx.VertxMessageFactory;
import io.vertx.core.Vertx;
import io.vertx.core.http.HttpClient;
import io.vertx.core.http.HttpClientRequest;

public class SampleBinaryHTTPClient{

    private static String accessKeyId = "{accessKeyId}";
    private static String accessKeySecret = "{accessKeySecret}";
    private static String endpoint = "http://{endpoint}/openapi/putEvents";

    public static void main(String[] args) throws Exception {

        final Vertx vertx = Vertx.vertx();
        final HttpClient httpClient = vertx.createHttpClient();

        // Create an event template to set basic CloudEvent attributes.
        CloudEventBuilder eventTemplate = CloudEventBuilder.v1()
            .withSource(URI.create("https://github.com/cloudevents/sdk-java/tree/master/examples/vertx"))
            .withType("vertx.example");

        // create HTTP request.
        final HttpClientRequest request = httpClient.postAbs(endpoint)
            .handler(response -> {
                System.out.println(response.statusMessage());

            })
            .exceptionHandler(System.err::println);

        String id = UUID.randomUUID()
            .toString();
        String data = "{\"name\":\"EventBridge\",\"scope\":100}";

        // Create the event starting from the template
        final CloudEvent event = eventTemplate.newBuilder()
            .withId(id)
            .withData("application/json", data.getBytes())
            .withExtension("aliyuneventbusname", "demo-bus")
            .withSource(URI.create("https://github.com/cloudevents/sdk-java/tree/master/examples/vertx"))
            .withType("vertx.example")
            .withSubject("acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
            .build();

        request.putHeader("content-type", "application/json");
        request.putHeader("authorization",
            "acs" + ":" + accessKeyId + ":" + SignatureHelper.getSignature(SignatureHelper.getStringToSign(request),
                accessKeySecret) + "");
        VertxMessageFactory.createWriter(request)
            .writeBinary(event);
    }
}
