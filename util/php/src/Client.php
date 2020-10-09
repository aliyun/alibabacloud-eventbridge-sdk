<?php

namespace AlibabaCloud\EventBridgeUtil;

use AlibabaCloud\Tea\Model;
use AlibabaCloud\Tea\Request;

/**
 * This is for EventBridge SDK.
 */
class Client
{
    /**
     * Get the string to be signed according to request.
     *
     * @param Request $request which contains signed messages
     *
     * @return string the signed string
     */
    public static function getStringToSign($request)
    {
        $pathname = $request->pathname ? $request->pathname : '';
        $query    = $request->query ? $request->query : [];

        $contentMD5  = isset($request->headers['content-md5']) ? $request->headers['content-md5'] : '';
        $contentType = isset($request->headers['content-type']) ? $request->headers['content-type'] : '';
        $date        = isset($request->headers['date']) ? $request->headers['date'] : '';

        $result = $request->method . "\n" .
            $contentMD5 . "\n" .
            $contentType . "\n" .
            $date . "\n";

        $canonicalizedHeaders  = self::getCanonicalizedHeaders($request->headers);
        $canonicalizedResource = self::getCanonicalizedResource($pathname, $query);

        return $result . $canonicalizedHeaders . $canonicalizedResource;
    }

    /**
     * Get signature according to stringToSign, secret.
     *
     * @param string $stringToSign the signed string
     * @param string $secret       accesskey secret
     *
     * @return string the signature
     */
    public static function getSignature($stringToSign, $secret)
    {
        return base64_encode(hash_hmac('sha1', $stringToSign, $secret, true));
    }

    /**
     * Serialize events.
     *
     * @param mixed $events the object
     *
     * @return mixed the result
     */
    public static function serialize($events)
    {
        if (\is_object($events)) {
            $events = json_decode(json_encode($events), true);
        }
        foreach ($events as $k => &$v) {
            if (\is_object($v) && $v instanceof Model) {
                $v = $v->toMap();
            }
            if (\is_array($v)) {
                if (!isset($v['datacontenttype']) || empty($v['datacontenttype'])) {
                    $v['datacontenttype'] = 'application/json';
                }
                $content_type = $v['datacontenttype'];
                if (isset($v['data']) && \is_array($v['data'])) {
                    // to string
                    $str = '';
                    foreach ($v['data'] as $ch) {
                        $str .= \chr($ch);
                    }
                    $v['data'] = $str;
                }
                if (!\in_array($content_type, ['application/json', 'text/json']) && !empty($v['data'])) {
                    $v['data_base64'] = base64_encode($v['data']);
                    unset($v['data']);
                } elseif (!empty($v['data'])) {
                    $res = @json_decode($v['data'], true);
                    if (\is_array($res)) {
                        $v['data'] = $res;
                    }
                }
                if (isset($v['extensions']) && \is_array($v['extensions'])) {
                    foreach ($v['extensions'] as $ek => $ev) {
                        $v[$ek] = $ev;
                    }
                    unset($v['extensions']);
                }
            }
        }

        return $events;
    }

    public static function getCanonicalizedHeaders($headers, $prefix = 'x-acs-')
    {
        ksort($headers);
        $str = '';
        foreach ($headers as $k => $v) {
            if (0 === strpos(strtolower($k), $prefix)) {
                $str .= $k . ':' . trim($v) . "\n";
            }
        }

        return $str;
    }

    public static function getCanonicalizedResource($pathname, $query)
    {
        if (0 === \count($query)) {
            return $pathname;
        }
        ksort($query);
        $tmp = [];
        foreach ($query as $k => $v) {
            if (empty($v)) {
                continue;
            }
            array_push($tmp, $k . '=' . $v);
        }

        return $pathname . '?' . implode('&', $tmp);
    }

    /**
     * Judge if the  origin is start with the prefix.
     *
     * @param string $origin the original string
     * @param string $prefix the prefix string
     *
     * @return bool the result
     */
    public static function startWith($origin, $prefix)
    {
        return 0 === strpos($origin, $prefix);
    }
}
