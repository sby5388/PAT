$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,xxx,yyy,A*50
,
,,,,,,,,,,,

这里整条语句是一个文本行，行中以逗号“,”隔开各个字段，每个字段的大小（长度）不一，这里的示例只是一种可能，并不能认为字段的大小就如上述例句一样。
    字段0：$GPRMC，语句ID，					$GPRMC
    字段1：UTC时间，hhmmss.sss格式				024813.640
    字段2：状态，A=定位，V=未定位				A
    字段3：纬度ddmm.mmmm，度分格式（前导位数不足则补0）		3158.4608
    字段4：纬度N（北纬）或S（南纬）				N
    字段5：经度dddmm.mmmm，度分格式（前导位数不足则补0）	11848.3737
    字段6：经度E（东经）或W（西经）				E
    字段7：速度，节，Knots					10.05
    字段8：方位角，度						324.27
    字段9：UTC日期，DDMMYY格式					150706
    字段10：磁偏角，（000 - 180）度（前导位数不足则补0）	xxx
    字段11：磁偏角方向，E=东W=西				yyy
    字段16：校验值						A*50

//参考答案
 #include<stdio.h>
 #include<string.h>
 main()
 {
     char str[100] = "\0";
     char str1[] = "END";
     char str2[] = "$GPRMC";
  
     int jiaoyan1, jiaoyan3;
     char jiaoyan2[3];
     int jiaoyan4;
     int i,j,len;
     int hh,mm,ss;
 
     do
     {
         gets(str);        //输入字符串
	 if(strncmp(str,str2,6)==0)        //如果字符串的前6位是$GPRMC
         {
             for (jiaoyan1 = str[1], i = 2; str[i] != '*'; i++)
							// 提示：^运算符的作用是异或。将$和*之间所有的字
							//符做^运算(第一个字符和第二个字符异或，结果再和第三
							//个字符异或，依此类推)之后的值对65536取余后的结果
             {
                 jiaoyan1 = jiaoyan1^str[i];
             }
	     jiaoyan3 = jiaoyan1 % 65536;
	     len = strlen(str);    /* 求出字符串长度 */
 
             for (i = len - 2, j = 0; j < 3; i++, j++)        /* 取出*后面的两个十六进制数字的值 */
             {
                 jiaoyan2[j] = str[i];
             }
 
             sscanf(jiaoyan2, "%x", &jiaoyan4);
						//%x以十六进制格式输入整型数，另外，如果你需要的话，
						//可以用sscanf(s,"%d", &i)从字符串s中得到其所表达的整数数字给i。 
 
             if (jiaoyan3 == jiaoyan4)        /* 如果校验正确 */
             {
                 sscanf(str, "$GPRMC,%2d %2d %2d", &hh, &mm, &ss);
							 // 另外，如果你需要的话，可以用sscanf(s,"%d", &i)从字符串s中得到其所表达的整数数字给i。 
             }
         }
     } while (strcmp(str, str1) != 0);        /* 循环，当输入的字符串不是END，继续循环 */
 
     hh = hh + 8;        /* 北京时间 */

     if (hh >= 24)        /* 如果大于24小时 */
     {
        hh = hh - 24;
    }

     printf("%02d:%02d:%02d", hh, mm, ss);        /* 不足两位时前面补0 */
 }
