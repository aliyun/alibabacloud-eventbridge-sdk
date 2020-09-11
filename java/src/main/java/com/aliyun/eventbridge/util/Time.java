/*
 * Copyright 2018-Present The CloudEvents Authors
 * <p>
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * <p>
 * http://www.apache.org/licenses/LICENSE-2.0
 * <p>
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

package com.aliyun.eventbridge.util;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.TimeZone;

/**
 * Utilities to handle the <a href="https://github.com/cloudevents/spec/blob/v1.0/spec.md#type-system">CloudEvent
 * Attribute Timestamp type</a>
 */
public final class Time {

    private static SimpleDateFormat defaultDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS");
    public static String defaultZone = TimeZone.getDefault()
        .getID();

    /**
     * build default zone time
     * e.g: 2020-09-09T11:14:10.664Asia/Shanghai
     *
     * @return
     */
    public static String zoneTime(Date data) {
        return defaultDateFormat.format(data) + defaultZone;
    }

    /**
     * build zone time with specified zone
     * e.g: 2020-09-09T11:14:10.664Asia/Shanghai
     *
     * @return
     */
    public static String zoneTime(Date data, TimeZone zone) {
        return defaultDateFormat.format(data) + zone.getID();
    }
}
