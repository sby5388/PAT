/*
2GPS数据处理（6分）
题目内容：

NMEA-0183协议是为了在不同的GPS（全球定位系统）导航设备中建立统一的BTCM（海事无线电技术委员会）标准，
由美国国家海洋电子协会（NMEA-The National Marine Electronics Associa-tion）制定的一套通讯协议。
GPS接收机根据NMEA-0183协议的标准规范，将位置、速度等信息通过串口传送到PC机、PDA等设备。

NMEA-0183协议是GPS接收机应当遵守的标准协议，也是目前GPS接收机上使用最广泛的协议，
大多数常见的GPS接收机、GPS数据处理软件、导航软件都遵守或者至少兼容这个协议。

NMEA-0183协议定义的语句非常多，但是常用的或者说兼容性最广的语句只有$GPGGA、$GPGSA、$GPGSV、$GPRMC、$GPVTG、$GPGLL等。

其中$GPRMC语句的格式如下：
    $GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50

这里整条语句是一个文本行，行中以逗号“,”隔开各个字段，每个字段的大小（长度）不一，
这里的示例只是一种可能，并不能认为字段的大小就如上述例句一样。
    字段0：$GPRMC，语句ID，表明该语句为Recommended Minimum Specific GPS/TRANSIT Data（RMC）推荐最小定位信息
    字段1：UTC时间，hhmmss.sss格式
    字段2：状态，A=定位，V=未定位
    字段3：纬度ddmm.mmmm，度分格式（前导位数不足则补0）
    字段4：纬度N（北纬）或S（南纬）
    字段5：经度dddmm.mmmm，度分格式（前导位数不足则补0）
    字段6：经度E（东经）或W（西经）
    字段7：速度，节，Knots
    字段8：方位角，度
    字段9：UTC日期，DDMMYY格式
    字段10：磁偏角，（000 - 180）度（前导位数不足则补0）
    字段11：磁偏角方向，E=东W=西
    字段16：校验值

这里，“*”为校验和识别符，其后面的两位数为校验和，
代表了“$”和“*”之间所有字符（不包括这两个字符）的异或值的十六进制值。
上面这条例句的校验和是十六进制的50，也就是十进制的80。

提示：^运算符的作用是异或。将$和*之间所有的字符做^运算(第一个字符和第二个字符异或，
结果再和第三个字符异或，依此类推)之后的值对65536取余后的结果，应该和*后面的两个十六进制数字的值相等，
否则的话说明这条语句在传输中发生了错误。注意这个十六进制值中是会出现A-F的大写字母的。

现在，你的程序要读入一系列GPS输出，其中包含$GPRMC，也包含其他语句。在数据的最后，有一行单独的
    END
表示数据的结束。

你的程序要从中找出$GPRMC语句，计算校验和，找出其中校验正确，并且字段2表示已定位的语句，
从中计算出时间，换算成北京时间。一次数据中会包含多条$GPRMC语句，以最后一条语句得到的北京时间作为结果输出。
你的程序一定会读到一条有效的$GPRMC语句。

输入格式:
多条GPS语句，每条均以回车换行结束。最后一行是END三个大写字母。

输出格式：

6位数时间，表达为：
    hh:mm:ss
其中，hh是两位数的小时，不足两位时前面补0；mm是两位数的分钟，不足两位时前面补0；ss是两位数的秒，不足两位时前面补0。

输入样例：
$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50
END

输出样例：
10:48:13
*/
//todo  抄袭 自  https://blog.csdn.net/zjw_python/article/details/70313906
#include <stdio.h>
#include <string.h>

int main() {
	char s[1000],*p;
	int check,sum,hour,min,sec;
	do {
		scanf("%s",s);
		if (s[0]=='$' && s[1]=='G'&&s[2]=='P'&&s[3]=='R'&&s[4]=='M'&&s[5]=='C') {
			for (p=s+7; *p!=','; p++);      //找到定位的位置，刚开始直接输的第19位，结果错误，简直是个大坑
			if (*(p+1)=='A') {
				p=s;
				check=*(++p);
				for (p=p+1; *p!='*'; p++) {     //进行异或计算
					check = check^(*p);
				}
				p++;
				sum=0;
				for (; *p!='\0'; p++) {          //将十六进制转换为10进制
					if (*p>='0' && *p<='9') {
						sum = sum*16+*p-'0';
					} else if (*p>='A' && *p<='F') {
						sum = sum*16 +*p-'A'+10;
					}
				}
				if (sum==(check%65536)) {          //记录时间
					hour = (s[7]-'0')*10+s[8]-'0'+8;
					if (hour>=24) hour=hour-24;
					min = (s[9]-'0')*10+s[10]-'0';
					sec = (s[11]-'0')*10+s[12]-'0';
				}
			}
		}
	} while(strcmp(s,"END")!=0);
	printf("%02d:%02d:%02d\n",hour,min,sec);
	return 0;
}


