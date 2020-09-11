package com.aliyun.eventbridgeutil.exception;

public class EventBridgeException extends RuntimeException{

    public EventBridgeException(String message, Throwable cause) {
        super(message, cause);
    }
}
