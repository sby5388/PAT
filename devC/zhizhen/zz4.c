#include<stdio.h>
#include<string.h>
void dushu(int n,int m);
int main()
{
	char a[101];
	scanf("%s",&a);
//	printf("a==%s\n",a);
	int k=strlen(a);
//	printf("k==%d\n",k);
	int shuzu[10];
	int sum2=0; 
	int kk=0;
	int sum=0;
	for(int i=0;i<10;i++)
	{
		shuzu[i]=0;
	}
	for(int i=0;i<k;i++)
	{
		char t=a[i];
		if(t=='0') shuzu[0]++; 
		if(t=='1') shuzu[1]++; 
		if(t=='2') shuzu[2]++; 
		if(t=='3') shuzu[3]++; 
		if(t=='4') shuzu[4]++; 
		if(t=='5') shuzu[5]++; 
		if(t=='6') shuzu[6]++; 
		if(t=='7') shuzu[7]++; 
		if(t=='8') shuzu[8]++; 
		if(t=='9') shuzu[9]++; 
	}
	
	for(int i=0;i<10;i++)
	{
//		printf("%d \n",shuzu[i]);
		sum=sum+i*shuzu[i];
	}
// 	printf("sum==%d\n",sum);
	
	if(sum<0)
	{
		printf("和是负数，这种情况肯定不会发生\n");
		dushu(-1,kk);
		kk++;
		sum=-sum;
	}
	int yu=0;
	//取逆序数
	
	while(sum>0)
	{
		yu=sum%10;
		sum2=sum2*10+yu;
		sum=sum/10; 
	} 
	//读取数字
	do
	{
		yu=sum2%10;
		dushu(yu,kk);
		kk++;
		sum2=sum2/10;
	} while(sum2>0);
	
	return 0;
}
void dushu(int n,int m)
{
	if(m>0)
	{
		printf(" ");
	}
	switch(n)
	{
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
		case -1:printf("fu");break;
		default :break;
	}
}
