package com.aliyun.eventbridge.util;

import java.util.concurrent.TimeUnit;

import com.google.common.cache.Cache;
import com.google.common.cache.CacheBuilder;

public class KVCache {

    final static Cache<String, Object> cache = CacheBuilder.newBuilder()
        .maximumSize(1000)
        .expireAfterWrite(3, TimeUnit.MINUTES)
        .recordStats()
        .build();

    /**
     * Returns the value associated with {@code key} in this cache, or {@code null} if there is no
     * cached value for {@code key}.
     */
    public static Object getIfPresent(Object key) {
        return cache.getIfPresent(key);
    }

    /**
     * Associates {@code value} with {@code key} in this cache. If the cache previously contained a
     * value associated with {@code key}, the old value is replaced by {@code value}.
     */
    public static void put(String key, Object value) {
        cache.put(key, value);
    }

    /**
     * Returns the number of times {@link Cache} lookup methods have returned a cached value.
     */
    public static long hitCount() {
        return cache.stats()
            .hitCount();
    }

}
