#include<stdio.h>
int main()
{
	char shuzi[10]={'a','b','c','d','e','f','g','h','i','j'};
	char shuwei[5]={'S','B','Q','W','Y','S','B','Q'};
//	printf("%c",shuwei[1]);
	int n=0;
	scanf("%d",&n);
	int n2=n;
	int count=0;
	int n1=0;
	int yu=0;
	do{
	//	yu=n%10;
		count++;
	//	n1=n1*10 + yu;
		n2=n2/10;
	}while(n2>0);
	int yuu[count];
	
	for(int i=0;i<count;i++)
	{
		yu=n%10;
		n=n/10;
		yuu[i]=yu;
	}
	
	
	printf("count=%d\n",count);
	for(int i=count;i>0;i++)
	{
		int k=yuu[i];
		int j=i%5;
		if(k!=0)
		{
			printf("%c",shuzi[k]);
			printf("%c",shuwei[j-1]);
		}
	
	}
	return 0;
}
/*
	输入一个整数（位数不超过9位）代表一个人民币值（单位为元），请转换成财务要求的大写中文格式。
	如23108元，转换后变成“贰万叁仟壹百零捌”元。为了简化输出，
	用小写英文字母a-j顺序代表大写数字0-9，用S、B、Q、W、Y分别代表拾、百、仟、万、亿。
	于是23108元应被转换输出为“cWdQbBai”元。
		输入格式：输入在一行中给出一个不超过9位的非负整数。
		输出格式：在一行中输出转换后的结果。注意“零”的用法必须符合中文习惯。
	输入样例1：813227345
	输出样例1：iYbQdBcScWhQdBeSf
	输入样例2：6900
	输出样例2：gQjB
*/
