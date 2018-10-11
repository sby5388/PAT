#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0&&n<1000)
	{
		int n2=n;
		int b,s,g;
		b=n2/100;
		n2=n2%100;
		s=n2/10;
		g=n2%10;
		for(int i=0;i<b;i++)
		{
			printf("B");
		}
		for(int i=0;i<s;i++)
		{
			printf("S");
		}
		//printf("%d%d",g,n);
		if(g==0)
		{
		//	printf("0");
		}else
		{
			for(int i=1;i<=g;i++)
			{
				printf("%d",i);
			}
		}
		
	}
	
	return 0;
}
