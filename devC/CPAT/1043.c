#include<stdio.h>
#include<string.h>
int main() 
{
	//输出PATest 
	//由l1-023改编来的 
	char c[10001];
	scanf("%s",&c);
	int len=strlen(c);
	int shuzu[6];
	char c2[6]={'P','A','T','e','s','t'};
	for(int i=0;i<6;i++)
	{
		shuzu[i]=0;
	}
	for(int i=0;i<len;i++)
	{
		if(c[i]=='P')
		{
			shuzu[0]++;
		}
		if(c[i]=='A')
		{
			shuzu[1]++;
		}
		if(c[i]=='T')
		{
			shuzu[2]++;
		}
		if(c[i]=='e')
		{
			shuzu[3]++;
		}
		if(c[i]=='s')
		{
			shuzu[4]++;
		}
		if(c[i]=='t')
		{
			shuzu[5]++;
		}
	}
	int sum=0;
	for(int i=0;i<6;i++)
	{
		sum=sum+shuzu[i];
	}
	while(sum>0)
	{
		for(int i=0;i<6;i++)
		{
			if(shuzu[i]>0)
			{
				printf("%c",c2[i]);
				shuzu[i]--;
				sum--;
			} 
		}	
	}	
	return 0;
}
