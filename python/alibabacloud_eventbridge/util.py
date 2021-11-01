import time


class KvCache:
    def __init__(self):
        self.cache = dict()
        self.duration = 180

    def put(self, val):
        self.cache[val] = time.time()

    def get_if_present(self, val):
        now = time.time()
        cache_time = self.cache.get(val)
        if cache_time:
            if now - cache_time < self.duration:
                return val
            else:
                self.cache.pop(val)


kv_cache = KvCache()
