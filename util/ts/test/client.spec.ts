import 'mocha';
import Client from '../src/client';

import * as $tea from '@alicloud/tea-typescript';
import assert from 'assert';

/**
 * Cloud Event Stanard Froamt
 */
export class CloudEvent extends $tea.Model {
    id: string;
    source: string;
    specversion?: string;
    type: string;
    datacontenttype?: string;
    dataschema?: string;
    subject?: string;
    time?: string;
    extensions: { [key: string]: any };
    data?: Buffer;
    static names(): { [key: string]: string } {
      return {
        id: 'id',
        source: 'source',
        specversion: 'specversion',
        type: 'type',
        datacontenttype: 'datacontenttype',
        dataschema: 'dataschema',
        subject: 'subject',
        time: 'time',
        extensions: 'extensions',
        data: 'data',
      };
    }
  
    static types(): { [key: string]: any } {
      return {
        id: 'string',
        source: 'string',
        specversion: 'string',
        type: 'string',
        datacontenttype: 'string',
        dataschema: 'string',
        subject: 'string',
        time: 'string',
        extensions: { 'type': 'map', 'keyType': 'string', 'valueType': 'any' },
        data: 'Buffer',
      };
    }
  
    constructor(map?: { [key: string]: any }) {
      super(map);
    }
  }


describe('EventBridge Util', function () {
    it('Module should ok', function () {
        assert.ok(Client);
    });

    it('getStringToSign should be ok', function () {
        let request = new $tea.Request();
        request.pathname = '/';
        request.headers['accept'] = 'application/json';
        assert.strictEqual(Client.getStringToSign(request), 'GET\n\n\n\n/');

        request.method = 'GET';
        request.headers['content-md5'] = 'md5';
        request.headers['content-type'] = 'application/json';
        request.headers['date'] = 'date';
        assert.strictEqual(Client.getStringToSign(request), 'GET\nmd5\napplication/json\ndate\n/');

        request.headers['x-acs-custom-key'] = 'any value';
        assert.strictEqual(Client.getStringToSign(request), 'GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/');

        request.query['key'] = 'val ue with space';
        assert.strictEqual(Client.getStringToSign(request), 'GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/?key=val ue with space');

    })

    it('getSignature should be ok', function () {
        assert.strictEqual(Client.getSignature('stringtosign', 'secret'), 'OmuTAr79tpI6CRoAdmzKRq5lHs0=');
    })

    const JSON_OBJECT_EVENT = '[{\"datacontenttype\":\"application/json\",\"data\":{\"bus\":\"demo\"}}]';

    const JSON_OBJECT_EMPTY_EVENT = '[{\"data\":{\"bus\":\"demo\"}}]';

    const JSON_ARRAY_EVENT = '[{\"datacontenttype\":\"application/json\",\"data\":[{\"bus\":\"demo\"},' +
        '{\"bus\":\"demo\"}]}]';

    const JSON_STRING_EVENT = '[{\"datacontenttype\":\"application/json\",\"data\":\"string\"}]';

    const JSON_NUMBER_EVENT = '[{\"datacontenttype\":\"application/json\",\"data\":100}]';

    const JSON_BOOLEAN_EVENT = '[{\"datacontenttype\":\"application/json\",\"data\":true}]';

    const BASE64_EVENT = '[{\"datacontenttype\":\"application/octet-stream\",\"data_base64\":\"eyAiYnVzIjoiZGVtbyIgfQ==\"}]';

    const EXTENSION_EVENT = '[{\"datacontenttype\":\"application/octet-stream\",\"data_base64\":\"eyAiYnVzIjoiZGVtbyIgfQ==\",\"key\":\"value\"}]';

    it('jsonObjectSerialize should be ok', function () {
        assert.strictEqual(JSON.stringify(Client.serialize(null)), '[]');

        let cloudEvent = new CloudEvent();
        cloudEvent.datacontenttype = 'application/json';
        let cloudEventList = [cloudEvent];
        assert.strictEqual(JSON.stringify(Client.serialize(cloudEventList)), '[{\"datacontenttype\":\"application/json\"}]');

        cloudEvent.data = Buffer.from('{ \"bus\":\"demo\" }', 'utf-8');
        //cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), JSON_OBJECT_EVENT);
    })

    it('jsonObjectEmptySerialize should be ok', function() {
        let cloudEvent = new CloudEvent();
        cloudEvent.data = Buffer.from('{ \"bus\":\"demo\" }', 'utf-8');
        let cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), JSON_OBJECT_EMPTY_EVENT);
    })

    it('jsonArraySerialize should be ok', function() {
        let cloudEvent = new CloudEvent();
        cloudEvent.datacontenttype = 'application/json';
        cloudEvent.data = Buffer.from('[{\"bus\":\"demo\"},{\"bus\":\"demo\"}]', 'utf-8');

        let cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), JSON_ARRAY_EVENT);
    })

    it('jsonStringSerialize should be ok', function() {
        let cloudEvent = new CloudEvent();
        cloudEvent.datacontenttype = 'application/json';
        cloudEvent.data = Buffer.from('string', 'utf-8');

        let cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), JSON_STRING_EVENT);
    })

    it('jsonNumberSerialize should be ok', function() {
        let cloudEvent = new CloudEvent();
        cloudEvent.datacontenttype = 'application/json';
        cloudEvent.data = Buffer.from('100', 'utf-8');

        let cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), JSON_NUMBER_EVENT);
    })

    it('jsonBooleanSerialize should be ok', function() {
        let cloudEvent = new CloudEvent();
        cloudEvent.datacontenttype = 'application/json';
        cloudEvent.data = Buffer.from('true', 'utf-8');

        let cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), JSON_BOOLEAN_EVENT);
    })

    it('base64Serialize should be ok', function() {
        let cloudEvent = new CloudEvent();
        cloudEvent.datacontenttype = 'application/octet-stream';
        cloudEvent.data = Buffer.from('{ \"bus\":\"demo\" }', 'utf-8');

        let cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), BASE64_EVENT);
    })

    it('extensionSerialize should be ok', function() {
        let cloudEvent = new CloudEvent();
        cloudEvent.datacontenttype = 'application/octet-stream';
        cloudEvent.data = Buffer.from('{ \"bus\":\"demo\" }', 'utf-8');
        cloudEvent.extensions = { 'key': 'value'};

        let cloudEventList = [cloudEvent];
        const obj = Client.serialize(cloudEventList);
        assert.strictEqual(JSON.stringify(obj), EXTENSION_EVENT);
    })

    it('startWith should be ok', function() {
        assert.strictEqual(Client.startWith(null, 'evenc'), false);
        assert.ok(Client.startWith('eventbridge', 'event'));
        assert.strictEqual(Client.startWith('eventbridge', 'evenc'), false);
    })
})