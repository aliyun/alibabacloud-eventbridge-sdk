/**
 * This is for EventBridge SDK
 */
// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

using Newtonsoft.Json;

using Tea;
using Tea.Utils;

namespace AlibabaCloud.EventBridgeUtil
{
    public class Common
    {

        /**
         * Get the string to be signed according to request
         * @param request  which contains signed messages
         * @return the signed string
         */
        public static string GetStringToSign(TeaRequest request)
        {
            string method = request.Method;
            string pathname = request.Pathname;
            Dictionary<string, string> headers = request.Headers;
            Dictionary<string, string> query = request.Query;
            string contentMD5 = headers.ContainsKey("content-md5") ? headers["content-md5"] : "";
            string contentType = headers.ContainsKey("content-type") ? headers["content-type"] : "";
            string date = headers.ContainsKey("date") ? headers["date"] : "";
            string header = method + "\n" + contentMD5 + "\n" + contentType + "\n" + date + "\n";
            string canonicalizedHeaders = GetCanonicalizedHeaders(headers);
            string canonicalizedResource = GetCanonicalizedResource(pathname, query);
            string stringToSign = header + canonicalizedHeaders + canonicalizedResource;
            return stringToSign;
        }

        /**
         * Get signature according to stringToSign, secret
         * @param stringToSign  the signed string
         * @param secret accesskey secret
         * @return the signature
         */
        public static string GetSignature(string stringToSign, string secret)
        {
            byte[] signData;
            using(KeyedHashAlgorithm algorithm = CryptoConfig.CreateFromName("HMACSHA1") as KeyedHashAlgorithm)
            {
                algorithm.Key = Encoding.UTF8.GetBytes(secret);
                signData = algorithm.ComputeHash(Encoding.UTF8.GetBytes(stringToSign.ToCharArray()));
            }
            return System.Convert.ToBase64String(signData);
        }

        /**
         * Serialize events
         * @param events the object
         * @return the result
         */
        public static object Serialize(object events)
        {
            var listModel = (IList) events;
            List<Dictionary<string, object>> listMap = new List<Dictionary<string, object>>();
            foreach (var model in listModel)
            {
                var map = ((TeaModel) model).ToMap();
                var contentType = map.Get("datacontenttype").ToSafeString("application/json");
                var data = map.Get("data");
                if(map.ContainsKey("data"))
                {
                    map.Remove("data");
                }

                if (data != null)
                {
                    byte[] bytes = (byte[]) data;
                    if (contentType == "" || contentType.StartsWith("application/json") || contentType.StartsWith("text/json"))
                    {
                        string jsonData = Encoding.UTF8.GetString(bytes);
                        try
                        {
                            map["data"] = JsonConvert.DeserializeObject<object>(jsonData);
                        }
                        catch
                        {
                            map["data"] = jsonData;
                        }
                    }
                    else
                    {
                        map["data_base64"] = System.Convert.ToBase64String(bytes);
                    }
                }

                if (map.ContainsKey("extensions"))
                {
                    var iDic = ((IDictionary) map.Get("extensions"));
                    if (iDic != null)
                    {
                        var mapExtensions = iDic.Keys.Cast<string>().ToDictionary(key => key, key => iDic[key]);
                        foreach (var keypair in mapExtensions)
                        {
                            map[keypair.Key] = keypair.Value;
                        }
                    }
                    map.Remove("extensions");
                }
                map = map.Where(keypair => keypair.Value != null).ToDictionary(keypair => keypair.Key, keypair => keypair.Value);
                listMap.Add(map);
            }

            return listMap;
        }

        /**
         * Judge if the  origin is start with the prefix
         * @param origin the original string
         * @param prefix the prefix string
         * @return the result
         */
        public static bool StartWith(string origin, string prefix)
        {
            return origin.ToSafeString().StartsWith(prefix);
        }

        internal static string GetCanonicalizedHeaders(Dictionary<string, string> headers)
        {
            string prefix = "x-acs";
            List<string> canonicalizedKeys = new List<string>();
            canonicalizedKeys = headers.Where(p => p.Key.StartsWith(prefix))
                .Select(p => p.Key).ToList();
            canonicalizedKeys.Sort();
            StringBuilder result = new StringBuilder();
            for (int i = 0; i < canonicalizedKeys.Count; i++)
            {

                String key = canonicalizedKeys[i];
                result.Append(key);
                result.Append(":");
                result.Append(headers[key].Trim());
                result.Append("\n");
            }
            return result.ToString();
        }

        internal static string GetCanonicalizedResource(string pathname, Dictionary<string, string> query)
        {
            if (query == null || query.Count <= 0)
            {
                return pathname;
            }
            List<string> keys = query.Keys.ToList();
            keys.Sort();
            string key;
            List<string> result = new List<string>();
            for (int i = 0; i < keys.Count; i++)
            {
                key = keys[i];
                if (string.IsNullOrWhiteSpace(query[key]))
                {
                    continue;
                }
                result.Add(key + "=" + query[key]);
            }
            return pathname + "?" + string.Join("&", result);
        }

    }
}
