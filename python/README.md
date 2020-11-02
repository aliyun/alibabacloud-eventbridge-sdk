English | [简体中文](README-CN.md)
![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK for Python

## Requirements

- Python >= 3.4

## Installation
- **Install with pip**

Python SDK uses a common package management tool named `pip`. If pip is not installed, see the [pip user guide](https://pip.pypa.io/en/stable/installing/ "pip User Guide") to install pip.

```bash
# Install the alibabacloud_eventbridge
pip install alibabacloud_eventbridge
```

## Usage

```python
from alibabacloud_eventbridge.models import Config, CloudEvent
from alibabacloud_eventbridge.client import Client

config = Config(
    access_key_id='<access key id>',
    access_key_secret='<access key secret>',
    endpoint='<endpoint>'
)
client = Client(config)
request = CloudEvent(
    datacontenttype='application/json',
    data=b'test',
    id='id',
    source='source',
    time='2020-08-24T13:54:05.965Asia/Shanghai',
    subject='1.0',
    type='type',
    extensions={
        'aliyuneventbusname': 'BusName'
    }
)

resp = client.put_events([request])
print(resp)
print('request id:', resp.request_id)
print('failed entry count:', resp.failed_entry_count)
for entry in resp.entry_list:
    print('entry id:', entry.event_id)
    print('trace id:', entry.trace_id)
```


## Parameter Specification

```python
'''Config'''
class Config(TeaModel):
    def __init__(self):
        self.access_key_id = access_key_id          # access key id
        self.access_key_secret = access_key_secret  # access key secret
        self.security_token = security_token        # Security Token
        self.protocol = protocol                    # http|https
        self.region_id = region_id                  # region id
        self.read_timeout = read_timeout            # read timeout
        self.connect_timeout = connect_timeout      # connect timeout
        self.http_proxy = http_proxy                # http proxy
        self.https_proxy = https_proxy              # https proxy
        self.endpoint = endpoint                    # endpoint
        self.no_proxy = no_proxy                    # agent whitelist
        self.max_idle_conns = max_idle_conns        # maximum number of connections
        self.user_agent = user_agent                # User-Agent
        self.socks_5proxy = socks_5proxy            # socks5 proxy
        self.socks_5net_work = socks_5net_work      # ocks5 agency agreement
        self.endpoint_type = endpoint_type          # ednpoint type：internal，accelerate or null
        self.open_platform_endpoint = open_platform_endpoint  # endpoint used when the file is uploaded(Not at the moment)
        self.type = type                            # credential type，If you have any questions, please refer to it https://github.com/aliyun/credentials-python/blob/master/README-CN.md


'''RuntimeOptions'''
class RuntimeOptions(TeaModel):
    def __init__(self):
        self.autoretry = autoretry                    # whether to enable retry
        self.ignore_ssl = ignore_ssl                  # whether SSL validation is ignored
        self.max_attempts = max_attempts              # maximum number of retries
        self.backoff_policy = backoff_policy          # retry the sleep strategy
        self.backoff_period = backoff_period          # retry the sleep time
        self.read_timeout = read_timeout              # read timeout
        self.connect_timeout = connect_timeout        # connect timeout
        self.local_addr = local_addr                  # the local network adapter ip
        self.http_proxy = http_proxy                  # http proxy
        self.https_proxy = https_proxy                # httpsproxy
        self.no_proxy = no_proxy                      # agent whitelist
        self.max_idle_conns = max_idle_conns          # maximum number of connections
        self.socks_5proxy = socks_5proxy              # socks5 proxy
        self.socks_5net_work = socks_5net_work        # socks5 proxy
```

## Issues
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new), Issues not conforming to the guidelines may be closed immediately.

## Changelog
Detailed changes for each release are documented in the [release notes](./ChangeLog.md).

## References
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## License
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.