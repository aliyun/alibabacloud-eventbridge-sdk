[English](README.md) | 简体中文

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK for Python

## 要求

- Python >= 3.4

## 安装

- **使用 pip 安装(推荐)**

如未安装 `pip`, 请先至pip官网 [pip user guide](https://pip.pypa.io/en/stable/installing/ "pip User Guide") 安装pip .

```bash
# 安装 alibabacloud_eventbridge
pip install alibabacloud_eventbridge
```

## 使用

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

## 参数说明

```python
'''Config'''
class Config(TeaModel):
    def __init__(self):
        self.access_key_id = access_key_id          # access key id
        self.access_key_secret = access_key_secret  # access key secret
        self.security_token = security_token        # Security Token
        self.protocol = protocol                    # 请求协议 http|https
        self.region_id = region_id                  # 区域id
        self.read_timeout = read_timeout            # 读超时
        self.connect_timeout = connect_timeout      # 连接超时
        self.http_proxy = http_proxy                # http代理
        self.https_proxy = https_proxy              # https代理
        self.endpoint = endpoint                    # endpoint
        self.no_proxy = no_proxy                    # 代理白名单
        self.max_idle_conns = max_idle_conns        # 最大连接数
        self.user_agent = user_agent                # User-Agent
        self.socks_5proxy = socks_5proxy            # socks5代理
        self.socks_5net_work = socks_5net_work      # socks5代理协议
        self.endpoint_type = endpoint_type          # 域名类型：internal，accelerate 或不填
        self.open_platform_endpoint = open_platform_endpoint  # 文件上传时授权使用的域名(目前暂不需要填写)
        self.type = type                            # 凭证类型，如有疑问请参考https://github.com/aliyun/credentials-python/blob/master/README-CN.md


'''RuntimeOptions'''
class RuntimeOptions(TeaModel):
    def __init__(self):
        self.autoretry = autoretry                    # 是否开启重试
        self.ignore_ssl = ignore_ssl                  # 是否忽略 SSL 校验
        self.max_attempts = max_attempts              # 最大重试次数， 默认为 3
        self.backoff_policy = backoff_policy          # 重试休眠策略，默认为 no
        self.backoff_period = backoff_period          # 重试休眠时间， 默认为 1
        self.read_timeout = read_timeout              # 读超时
        self.connect_timeout = connect_timeout        # 连接超时
        self.local_addr = local_addr                  # 本地网卡 ip
        self.http_proxy = http_proxy                  # http 的代理
        self.https_proxy = https_proxy                # https 的代理
        self.no_proxy = no_proxy                      # 代理白名单
        self.max_idle_conns = max_idle_conns          # 最大连接数
        self.socks_5proxy = socks_5proxy              # socks5 代理
        self.socks_5net_work = socks_5net_work        # socks5 代理协议
```

## 问题
[提交 Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new)，不符合指南的问题可能会立即关闭。

## 发行说明
每个版本的详细更改记录在[发行说明](./ChangeLog.md)中。

## 相关
* [最新源码](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## 许可证
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.

