// This file is auto-generated, don't edit it
/**
 * This is for EventBridge SDK
 */
import * as $tea from '@alicloud/tea-typescript';
import kitx from 'kitx';

function filter(value: string): string {
  return value.replace(/[\t\n\r\f]/g, ' ');
}

function getCanonicalizedHeaders(headers: { [key: string]: any }) {
  const prefix = 'x-acs-';
  const keys = Object.keys(headers);

  const canonicalizedKeys = [];
  for (let i = 0; i < keys.length; i++) {
    const key = keys[i];
    if (key.startsWith(prefix)) {
      canonicalizedKeys.push(key);
    }
  }

  canonicalizedKeys.sort();

  var result = '';
  for (let i = 0; i < canonicalizedKeys.length; i++) {
    const key = canonicalizedKeys[i];
    result += `${key}:${filter(headers[key]).trim()}\n`;
  }

  return result;

}

function getCanonicalizedResource(uriPattern: string, query: { [key: string]: string }): string {
  const keys = Object.keys(query).sort();

  if (keys.length === 0) {
    return uriPattern;
  }

  var result = [];
  for (var i = 0; i < keys.length; i++) {
    const key = keys[i];
    result.push(`${key}=${query[key]}`);
  }

  return `${uriPattern}?${result.join('&')}`;
}

export default class Client {

  /**
   * Get the string to be signed according to request
   * @param request  which contains signed messages
   * @return the signed string
   */
  static getStringToSign(request: $tea.Request): string {
    const method = (request.method || 'GET').toUpperCase();
    const headers = request.headers;
    const contentMD5 = headers["content-md5"] || "";
    const contentType = headers["content-type"] || "";
    const date = headers["date"] || "";
    const header = method + "\n" + contentMD5 + "\n" + contentType + "\n" + date + "\n";
    const canonicalizedHeaders = getCanonicalizedHeaders(headers);
    const canonicalizedResource = getCanonicalizedResource(request.pathname, request.query);

    return `${header}${canonicalizedHeaders}${canonicalizedResource}`;
  }

  /**
   * Get signature according to stringToSign, secret
   * @param stringToSign  the signed string
   * @param secret accesskey secret
   * @return the signature
   */
  static getSignature(stringToSign: string, secret: string): string {
    const utf8Buff = Buffer.from(stringToSign, 'utf8');
    return kitx.sha1(utf8Buff, secret, 'base64') as string;
  }

  /**
   * Serialize events
   * @param events the object
   * @return the result
   */
  static serialize(events: any): any {
    const listModel = events || [];
    let listMap = [];
    for (let i = 0; i < listModel.length; i++) {
      const model = listModel[i];
      const map = $tea.toMap(model);
      const contentType = map["datacontenttype"] || "application/json";
      const data = map["data"];
      delete map["data"];

      if (data) {
        if (contentType === "" || contentType.startsWith("application/json") || contentType.startsWith("text/json")) {
          const jsonData = data.toString('utf8');
          try{
            map["data"] = JSON.parse(jsonData);
          } catch {
            map["data"] = jsonData;
          }
          
        } else {
          map["data_base64"] = data.toString('base64');
        }
      }

      if (map["extensions"]) {
        const mapExtensions = map["extensions"];
        Object.keys(mapExtensions).forEach(key => {
          map[key] = mapExtensions[key];
        });

        delete map["extensions"];
      }
      listMap.push(map);
    }
    return listMap;
  }

  /**
   * Judge if the  origin is start with the prefix
   * @param origin the original string
   * @param prefix the prefix string
   * @return the result
   */
  static startWith(origin: string, prefix: string): boolean {
    if(!origin) {
      return false;
    }
    return origin.startsWith(prefix);
  }

}
