<?php

namespace AlibabaCloud\EventBridgeUtil\Tests;

use AlibabaCloud\EventBridgeUtil\Client;
use AlibabaCloud\Tea\Request;
use PHPUnit\Framework\TestCase;

/**
 * @internal
 * @coversNothing
 */
class ClientTest extends TestCase
{
    public function testGetStringToSign()
    {
        $request                    = new Request();
        $request->method            = 'GET';
        $request->pathname          = '/';

        $this->assertEquals("GET\n\n\n\n/", Client::getStringToSign($request));

        $request->headers = [
            'accept'       => 'application/json',
            'content-md5'  => 'md5',
            'content-type' => 'application/json',
            'date'         => 'date',
        ];
        $this->assertEquals("GET\nmd5\napplication/json\ndate\n/", Client::getStringToSign($request));

        $request->headers = [
            'accept'                   => 'application/json',
            'content-md5'              => 'md5',
            'content-type'             => 'application/json',
            'date'                     => 'date',
            'x-acs-custom-key'         => 'any value',
        ];
        $this->assertEquals("GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/", Client::getStringToSign($request));

        $request->query = [
            'key' => 'val ue with space',
        ];
        $this->assertEquals("GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/?key=val ue with space", Client::getStringToSign($request));
    }

    public function testGetSignature()
    {
        $this->assertEquals('OmuTAr79tpI6CRoAdmzKRq5lHs0=', Client::getSignature('stringtosign', 'secret'));
    }

    public function testSerialize()
    {
        $result = Client::serialize([
            ['datacontenttype'=>'text/plain', 'data'=>$this->toBytes('test1')],
            ['datacontenttype'=> 'text/json', 'extensions'=>['foo'=>'bar']],
            ['datacontenttype'=> 'text/json', 'data'=>$this->toBytes(json_encode(['foo'=>'bar']))],
            ['datacontenttype'=> 'text/json', 'data'=>$this->toBytes('\\{"foo": "bar"}\\')]
        ]);
        $this->assertEquals([
            ['datacontenttype'=>'text/plain', 'data_base64'=>'dGVzdDE='],
            ['datacontenttype'=> 'text/json', 'foo'=>'bar'],
            ['datacontenttype'=> 'text/json', 'data'=>['foo'=>'bar']],
            ['datacontenttype'=> 'text/json', 'data'=>'\\{"foo": "bar"}\\'],
        ], $result);
    }

    public function testStartWith()
    {
        $this->assertTrue(Client::startWith('x-test-string', 'x-test'));
        $this->assertFalse(Client::startWith('x-test-string', 'test-string'));
    }

    private function toBytes($string)
    {
        $bytes = [];
        for ($i = 0; $i < \strlen($string); ++$i) {
            $bytes[] = \ord($string[$i]);
        }

        return $bytes;
    }
}
