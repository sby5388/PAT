#include<stdio.h>
//应当使用数组来表示更合适 :不知道位数，不适合 
int main()
{
//	D进制的A+B 
	long a=0,b=0;
	int c=1;
	scanf("%ld %ld %d",&a,&b,&c);
	
	long sum1 = a + b ;//和 
	int d=0;
	long sum2 = sum1;
	while(sum2>c){
		d =d*10 + sum2 % c;
		sum2=sum2 /c;
		
	} 
	d=d*10 + sum2;
	//取反序数
	int d1=0;
	while(d>0){
		d1 = d1*10 + d%10;
		d = d/10;
	} 
	printf("%d\n",d1);
	
	return 0;
} 
