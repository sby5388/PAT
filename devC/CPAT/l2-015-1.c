#include<stdio.h>
int main()
{

	int zs=6;
	int	cishu=5;
	int shuchu=3;//学生人数、每份作业的评审次数、输出的人数 
	
		double zh[shuchu];
		for(int i=0;i<shuchu;i++)
		{
			zh[i]==0.0;//最终结果 
		}
		int sum[zs];
		int fenshu[6][5]={		88,90,85,99,60,
							   	67,60,80,76,70,
							   	90,93,96,99,99,
								78,65,77,70,72,
								88,88,88,88,88,
								55,55,55,55,55};
		double pjf[zs];
		for(int i=0;i<zs;i++)
		{
			for(int j=0;j<cishu;j++)
			{
				printf("%d ",fenshu[i][j]);
			}
			printf("\n");
		}
		for(int i=0;i<zs;i++)
		{
			sum[i]=0;
			pjf[i]=0; 
		} 
		//获取输入 
		
		//计算和 
		for(int i=0;i<zs;i++)
		{
			int min=fenshu[i][0];
			int max=fenshu[i][0];
			for(int j=0;j<cishu;j++)
			{
				sum[i]=sum[i]+fenshu[i][j];
				if(fenshu[i][j]>=max)
				{
					max=fenshu[i][j];
				}
				if(fenshu[i][j]<=min)
				{
					min=fenshu[i][j];
				}
			}
			sum[i]= sum[i]-min-max;
			double d1=sum[i]*1.0/(cishu-2);
			pjf[i]=d1;
		}
		printf("平均分：");
		for(int i=0;i<zs;i++)
		{
			printf("%.3f ",pjf[i]); 
		}
		printf("\n");
		int sc=shuchu;
		while(sc>0)
		{
			double maxfs =pjf[0]; 
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
			printf("zh[sc]=%.3f \n",zh[sc-1]); 
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
	
	return 0;	
}
