#include<stdio.h>
#include<string.h>
int zhishu(int zs)
{
	int r=1;
	int count=0;
	if(zs==1)
	{
		r=0; 
	}else
	{
		for(int i=2;i<zs;i++)
		{
			if(zs%i==0)
			{
				r=0;
				break;
			}
		}
	}
	return r;
}
int main()
{
	int n=1;
	if(zhishu(n))
	{
		printf("��������"); 
	}else
	{
		printf("����������"); 
	} 
	return 0; 
}
