#include<stdio.h>
int main()
{
	int n=0;
	int n1=0; 
	scanf("%d",&n1);
	if(n1>0&&n1<=100000)
	{	n=n1;
		int fenshu[n];
		for(int i=0;i<n;i++)
		{
			fenshu[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			int k1=0;
			int k2=0;
			scanf("%d %d",&k1,&k2);
			if(k1>0&&k2>0)
			{
				fenshu[k1]=fenshu[k1]+k2;
			}
			
		}
		int max=0;//最大分数
		int maxi=0;
		for(int i=0;i<n;i++)
		{
			if(fenshu[i]>=max)
			{
				max=fenshu[i];
				maxi=i;
			}
		}
		printf("%d %d",maxi,max);
	}
	return 0;
}
