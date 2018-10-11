#include<stdio.h>
int main()
{
//	int n=1000,p=0;
	int n,p;
	int n1,p1;
	scanf("%d %d",&n1,&p1);
	if(n1>0&&n1<=100000&&p1>0&&p1<=100000000)
	{
		n=n1;
		p=p1;
	
		int min=0,max=1;
		int count=0;
		int shuzu[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&shuzu[i]);
	//		shuzu[i]=i+5;
		}
		
		min=shuzu[0];
		for(int i=0;i<n;i++)
		{
			if(shuzu[i]<=min)
			{
				min=shuzu[i];
			}
		}
		max=min*p;
		for(int i=0;i<n;i++)
		{
			if(shuzu[i]<=max)
			{
				count++;
			}
		}
		printf("%d",count);
	}
	return 0;
	
}
