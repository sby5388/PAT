#include<stdio.h>
int main() 
{
	int n=0;
	scanf("%d",&n);
	int shuzu[n];
	int ttt[n];
	int he[40];
	for(int i=0;i<40;i++)
	{
		he[i]=0;
	} 
	for(int i=0;i<n;i++)
	{
		shuzu[i]=0;
		ttt[i]=0;
		scanf("%d",&shuzu[i]);
	}
	for(int i=0;i<n;i++)
	{
		int yu=0;
		int sum=0;
		int k=shuzu[i];
		do{
			yu=k%10;
			sum+=yu;
			k=k/10;
		}while(k>0);
		ttt[i]=sum;
		he[sum]++;
	}
	int count=0;
	for(int i=0;i<40;i++)
	{
		if(he[i]>0)
		{
			count++;
		}
	}
	printf("%d\n",count);
	int mmm=0;
	for(int i=0;i<40;i++)
	{
		if(he[i]>0)
		{
			if(mmm==0)
			{
				printf("%d",i);
				mmm++;
			}else
			{
				printf(" %d",i);
			}
			
		}
	}
	return 0; 
}
