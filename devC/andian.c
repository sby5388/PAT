#include<stdio.h>
//寻找鞍点 
//int findmaxi(int x);//寻找每一行的最大值 
//int findminj(int x);//寻找每一列的最小值 
int main()
{
	//变量 
	int n =0;
	
	//获取输入 
	scanf("%d",&n);
	
	int shuzu[n][n];
	int i,j,maxi,minj,i2,j2;
	//完成数据的输入并放置到对应的位置 
	for(int i1 =0;i1<n;i1++)
	{
		for(int j1=0;j1<n;j1++)
		{
			scanf("%d",&shuzu[i1][j1]);
		}
	}
	
	//算最大值 
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				maxi=shuzu[i][0];
				if(shuzu[i][j]>maxi)
				{
					maxi = shuzu[i][j];
					j2=j;
					i2=i;
				}	
				for(int k=0;k<n;k++)
				{
					minj=shuzu[i2][j2];
					if(shuzu[k][j2]>minj)
					{						
					printf("%d %d\n",i2,j2);	
					}
				}		
			}				
		
			
			
		}
	} 
	
	

	
	return 0;	
} 


