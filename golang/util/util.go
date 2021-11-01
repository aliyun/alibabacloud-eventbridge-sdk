package util

import (
	"fmt"

	"github.com/alibabacloud-go/tea/tea"
	"github.com/coocood/freecache"
)

var Cache *freecache.Cache

func init() {
	Cache = freecache.NewCache(1000)
}

/**
 * Returns the value associated with {@code key} in this cache, or {@code null} if there is no
 * cached value for {@code key}.
 */
func GetIfPresent(key *string) *string {
	v, err := Cache.Get([]byte(tea.StringValue(key)))
	if err != nil {
		return nil
	}
	return tea.String(string(v))
}

/**
 * Associates {@code value} with {@code key} in this cache. If the cache previously contained a
 * value associated with {@code key}, the old value is replaced by {@code value}.
 */
func Put(key *string, value interface{}) {
	v := fmt.Sprintf("%v", value)
	Cache.Set([]byte(tea.StringValue(key)), []byte(v), 60*3)
}

/**
 * Returns the number of times {@link Cache} lookup methods have returned a cached value.
 */
func HitCount() *int64 {
	return tea.Int64(Cache.HitCount())
}
