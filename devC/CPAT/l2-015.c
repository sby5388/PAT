#include<stdio.h>
int main()
{
	int n0=6,n1=5,n2=3;
	int zs,cishu,shuchu;//学生人数、每份作业的评审次数、输出的人数,
	scanf("%d %d %d",&n0,&n1,&n2);
	if(n0>3&&n0<=10000&&n1>=3&&n1<=10&&n2>0&&n2<=20)
	{
		zs=n0;
		cishu=n1;
		shuchu=n2;
		int sc=shuchu;
		int fenshu[zs][cishu];
		double pjf[zs];
		double zh[shuchu];
		for(int i=0;i<shuchu;i++)
		{
			zh[i]==0.0;//最终结果 
		}
		for(int i=0;i<zs;i++)
		{
			pjf[i]=0;
			for(int j=0;j<cishu;j++)
			{
				fenshu[i][j]=0;
				scanf("%d",&fenshu[i][j]);
			}
		}
		for(int i=0;i<zs;i++)
		{
			int sum=0;
			int min=fenshu[i][0];
			int max=fenshu[i][0];
			for(int j=0;j<cishu;j++)
			{
				sum=sum+fenshu[i][j];
				if(fenshu[i][j]>=max)
				{
					max=fenshu[i][j];
				}
				if(fenshu[i][j]<=min)
				{
					min=fenshu[i][j];
				}
			}
			sum=sum-min-max;
			double d1=sum*1.0/(cishu-2);
			pjf[i]=d1;
		}
		while(sc>0)
		{
			double maxfs=pjf[0];
			int maxi=0;
			for(int i=0;i<zs;i++)
			{
				if(pjf[i]>=maxfs)
				{
					maxfs=pjf[i];
					maxi=i;
				}
			}
			zh[sc-1]=maxfs;
			sc--;
			pjf[maxi]=0.0;			
		}
		for(int i=0;i<shuchu;i++)
		{
			if(i==0)
			{
				printf("%.3f",zh[i]);
			}else
			{
				printf(" %.3f",zh[i]);
			}
		}
	}
	return 0;	
}
