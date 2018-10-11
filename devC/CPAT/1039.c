#include<stdio.h>
#include<string.h>
int main()
{
	//µ½µ×Âò²»ÂòÖé×Ó
	//0-9:48-57::0~9::-48
	//a-z:97-122::10~35::-87
	//A-Z:65-90::36~61::-29
	char c[2][1001];
	int len[2];
	for(int i=0;i<2;i++)
	{
		len[i]=0;
		scanf("%s",&c[i]);
		len[i]=strlen(c[i]);
	}
	int yu=len[0]-len[1];
	int shuzu[2][62];
	for(int i=0;i<62;i++)
	{
		shuzu[0][i]=0;
		shuzu[1][i]=0;
	}
	for(int i=0;i<2;i++)
	{	
		for(int j=0;j<len[i];j++)
		{
			char t=c[i][j];
			if(t>=48&&t<=57)//0-9
			{
				int t2=t-48;
				shuzu[i][t2]++;
			}
			if(t>=97&&t<=122)//a-z 
			{
				int t2=t-87;
				shuzu[i][t2]++;
			}
			if(t>=65&&t<=90)//A-Z
			{
				int t2=t-29;
				shuzu[i][t2]++;
			}
		}
	}
//	for(int i=0;i<62;i++)
//	{
//		printf("%d %d %d\n",i,shuzu[0][i],shuzu[1][i]);
//	}
	int sum=0;
	for(int i=0;i<62;i++)
	{
		if(shuzu[0][i]<shuzu[1][i])
		{
			int a=shuzu[1][i]-shuzu[0][i];
			sum=sum+a;
		}
	}
	if(sum==0)
	{
		printf("Yes %d",yu);
	}else
	{
		printf("No %d",sum);
	}
	
	
	return 0; 
}
