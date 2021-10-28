import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Base64;

import javax.crypto.Mac;
import javax.crypto.SecretKey;
import javax.crypto.spec.SecretKeySpec;


//服务端签名
public class T {

    /**
     * 号码状态查询
     */
    private static final String MAC_NAME = "HmacSHA1";
    private static final String ENCODING = "UTF-8";

    public static void main(String[] args) throws Exception {

        String accessKeyId = "LTAI5tMcnP1YGDdNHfjoaN3e";
        String accessSecret = "aCVZ32dPcuuBsJ0pqlFollymHne1CZ";

        java.text.SimpleDateFormat df = new java.text.SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss'Z'");
        df.setTimeZone(new java.util.SimpleTimeZone(0, "GMT"));// 这里一定要设置GMT时区。

        java.util.Map<String, String> paras = new java.util.HashMap<String, String>();
        // 1. 系统参数。
        paras.put("SignatureMethod", "HMAC-SHA1");
        paras.put("SignatureNonce", java.util.UUID.randomUUID().toString());
        paras.put("AccessKeyId", accessKeyId);
        paras.put("SignatureVersion", "1.0");
        paras.put("Timestamp", df.format(new java.util.Date()));
        paras.put("Format", "XML");
        // 2. 业务API参数。
        paras.put("Action", "GetMobile");
        paras.put("Version", "2017-05-25");
        paras.put("PhoneNumber", "15729541549");

//        paras.put("Version", "2017-05-25");
//        paras.put("Action", "DescribeVerifyScheme");
//        paras.put("SchemeCode", "FC100000140172031");

//        paras.put("Action", "GetMobile");
//        paras.put("AccessToken","eyJjIjoiREdYdndqTFdESWVxRDVYTnF2VU1GeW9rSUE2c09YSUpRV0VVTzhkTThNaUJlZzRHWHJDdU5BUkRkRmR2IEF2ZWU1Mnp0N1doS0draStZUnc5OFZZWjBVZUYra0dwM0pJMEs5SHdQVWlhaGtsUkR5bEs5TUkrMkd5aCBnNGsrSGFTNFZtalFyaU9xeUtIZFM5ZUZmTjE4TXIyamlmMHJtNllKR0dDOXYyV3IvdW9ia2E1QmpEUW8gVi9SZWJVNTV3OXpzcDI5RjZmM2kyTGwwb3AwcmdNWmZjMzIxWSs0Q21ObEZOUVozMzdFamdRcDVTMVlIIDQ3eXVOSk81SzR3K1oxZUpQYVZ4Z3pQaHJJVmR4NXRBWHNybEh5Z1Jhbm5yRlR2d3pLVzJQT0M0VGZqYSBxd1hsWXh4V2cyYTlQZzFXSDZHWC8wRzBYemVGbnpLV21GT3NzWXY1UlZyWTZBbFhxTDF5bERmbW83YUQgUUdvSGRkK1VmZko4dGxFUW85QWVOcUI1MU91Y1AySzlidkM4Z3prN2RlbW41NWZSemw3Y1FXLy9iRktHIC9CQlBnWWloRHU4a2lTWUg0c0pMc0NNZmhKWC9ydU51eWZzcTFsTzNmQVVITHNIWENUNlgvakhSYXA3VSBWWlFERmsrb21qcFBYVUVhekFuMXFYcnpjZm5qK05yZHI3Nlk0UlNiWmk2VHBpd2tBck16ZkFoWldwRHIgbVkxRjR0Z29JZC8vMlJxUUNzOERraTZCMnZIZ2NlR1RBWC9TSEM0aWhEbXQvOHpWUlBkandzTXY1dUJUIGpaVnZvT1d4K0VmWlRaakN0dVk9IiwiayI6ImNCWlUyaHNTbm92QUxETUcxT0Y3UjRaZm0zK1J2UXIwT2orVGNrY1BNRC94N3dBZnA0K2Y2TDFHOHdRbHJNb3VERkJJSkdyamZrM2FPWTcwVHVuV2VHWFgvZDQ3NVhVeU00OVpFMlFiVGJVUy9KVW5lZkRWYkwyc2Q2MUVvRmFjZUsrNG01MnBVeVVpQVYrK1ozMkhDVlBpVkpkOG85V2lpcWRnK2VBeTdQM2ZpQTIzQkxmbkZNFl1NmRUbmNrQ3lDcjQ1OW1ienFKWDArOXhHbCtsa1RDTFlPRzlLYXRTblM5d0M3WFZvOEZYdkRMWUZOcTd5QlNVOEhCQVRQVDAxMGtKRVlvOFh5QXU1STM0bHhvcDRwMlQ4RDNybXZRVnVrL1E2YmtqSGJYSkxsQWZJbmU3TUhkL1h2YnovQVNyQ3NTOFpLRDR5d1l2czlqUnJtbjhaQT09IiwibyI6IkFuZHJvaWQifQ");


        // 3. 去除签名关键字Key。
        if (paras.containsKey("Signature"))
            paras.remove("Signature");

        //4.根据参数Key排序（顺序）
        java.util.TreeMap<String, String> sortParas = new java.util.TreeMap<String, String>();
        sortParas.putAll(paras);

        // 5. 构造待签名的字符串。
        java.util.Iterator<String> it = sortParas.keySet().iterator();
        StringBuilder sortQueryStringTmp = new StringBuilder();
        while (it.hasNext()) {
            String key = it.next();
            sortQueryStringTmp.append("&").append(specialUrlEncode(key)).append("=").append(specialUrlEncode(paras.get(key)));
        }

        String sortedQueryString = sortQueryStringTmp.substring(1);// 去除第一个多余的and（&）符号。
        StringBuilder stringToSign = new StringBuilder();
        stringToSign.append("POST").append("&");
        stringToSign.append(specialUrlEncode("/")).append("&");
        stringToSign.append(specialUrlEncode(sortedQueryString));
        String sign = HmacSHA1Encrypt(accessSecret + "&", stringToSign.toString());//获取签名
        // 6. 签名最后也要做特殊URL编码。
        String signature = specialUrlEncode(sign);

        System.out.println(paras.get("SignatureNonce"));
        System.out.println("\r\n=========\r\n");
        System.out.println(paras.get("Timestamp"));
        System.out.println("\r\n=========\r\n");
        System.out.println(sortedQueryString);
        System.out.println("\r\n=========\r\n");
        System.out.println(stringToSign.toString());
        System.out.println("\r\n=========\r\n");
        System.out.println(sign);
        System.out.println("\r\n=========\r\n");
        System.out.println(signature);
        System.out.println("\r\n=========\r\n");

        // 最终打印出合法GET请求的URL。
        System.out.println("https://dytnsapi.aliyuncs.com/?Signature=" + signature + sortQueryStringTmp);

        String URL = "https://dytnsapi.aliyuncs.com/?Signature="+ signature + sortQueryStringTmp;

//        System.out.println("http://dypnsapi.aliyuncs.com/?Signature=" + signature + sortQueryStringTmp);
//
//        String URL = "https://dypnsapi.aliyuncs.com/?Signature="+ signature + sortQueryStringTmp;
        System.err.println(sendRequest(URL, "POST"));

    }

    /**
     * 构造待签名的请求串
     * @param value
     * @return
     * @throws Exception
     */
    public static String specialUrlEncode(String value) throws Exception {
        return java.net.URLEncoder.encode(value, "UTF-8").replace("+", "%20").replace("*", "%2A").replace("%7E", "~");
    }


    /**
     * 获取签名
     * @param encryptText
     * @param encryptKey
     * @return
     * @throws Exception
     */
    public static String HmacSHA1Encrypt( String encryptKey,String encryptText) throws Exception
    {
        byte[] data=encryptKey.getBytes(ENCODING);
        //根据给定的字节数组构造一个密钥,第二参数指定一个密钥算法的名称
        SecretKey secretKey = new SecretKeySpec(data, MAC_NAME);
        //生成一个指定 Mac 算法 的 Mac 对象
        Mac mac = Mac.getInstance(MAC_NAME);
        //用给定密钥初始化 Mac 对象
        mac.init(secretKey);

        byte[] text = encryptText.getBytes(ENCODING);
        //完成 Mac 操作
        byte[] HMAC = mac.doFinal(text);
        String Signature=Base64.getEncoder().encodeToString(HMAC);
        return Signature;
    }
    public static String sendRequest(String urlParam,String requestType) {

        HttpURLConnection con = null;

        BufferedReader buffer = null;
        StringBuffer resultBuffer = null;

        try {
            URL url = new URL(urlParam);
            //得到连接对象
            con = (HttpURLConnection) url.openConnection();
            //设置请求类型
            con.setRequestMethod(requestType);
            //设置请求需要返回的数据类型和字符集类型
            con.setRequestProperty("Content-Type", "application/json;charset=GBK");
            //允许写出
            con.setDoOutput(true);
            //允许读入
            con.setDoInput(true);
            //不使用缓存
            con.setUseCaches(false);
            //得到响应码
            int responseCode = con.getResponseCode();
            System.out.println("================" + responseCode);

            if(responseCode == HttpURLConnection.HTTP_OK){
                //得到响应流
                InputStream inputStream = con.getInputStream();
                //将响应流转换成字符串
                resultBuffer = new StringBuffer();
                String line;
                buffer = new BufferedReader(new InputStreamReader(inputStream, "UTF-8"));
                while ((line = buffer.readLine()) != null) {
                    resultBuffer.append(line);
                }
                return resultBuffer.toString();
            }else {
                //得到响应流
                InputStream inputStream = con.getInputStream();
                //将响应流转换成字符串
                resultBuffer = new StringBuffer();
                String line;
                buffer = new BufferedReader(new InputStreamReader(inputStream, "UTF-8"));
                while ((line = buffer.readLine()) != null) {
                    resultBuffer.append(line);
                }
                return resultBuffer.toString();
            }

        }catch(Exception e) {
            e.printStackTrace();
        }
        return "lose";
    }

}

