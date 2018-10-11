#include<stdio.h>
int main()
{
	int n =0;
	scanf("%d",&n);
	
	int shuzu[n][n];


	for(int i1 =0;i1<n;i1++)
	{
		for(int j1=0;j1<n;j1++)
		{
			scanf("%d",&shuzu[i1][j1]);
		}
	}
	
	int i,j,maxi,minj,i2,j2,i3,i4,j3,j4,count=0;
	
	 //当前的算法只能算出对角线（i,i)上是否存在鞍点，其他位置上的鞍点无法计算出来
	 //存在严重的逻辑错误 
	for(i=0;i<n;i++)
	{
	
		maxi=shuzu[i][0];
		minj=shuzu[0][i];
		for(j=0;j<n;j++)
		{	
		
			if(shuzu[i][j]>=maxi)
			{
				maxi=shuzu[i][j];
				i2=i;
				j2=j;
			
			}	
			if(shuzu[j][i]<=minj)
			{
				minj=shuzu[j][i];
				i4=j;
				j4=i;
			
			}					
		}	
		
		if(maxi == minj)
		{
			
			printf("%d %d",i2,j2);
			count++;
			break;
		}
		
	}
	if(count==0)
	{
		printf("NO");
	}
	
	
//	printf("%d %d",i2,j2);
	
	
	return 0;
} 
	//设计思路：
	//找到每一行的最大值maxi，判断该值是不是这一列中的最小值相等
	
	//先尝试输出这个矩阵
	/*
	int k,k1;
	for(k=0;k<n;k++)
	{
		int count1=0;
		for(k1=0;k1<n;k1++)
		{
			count1++; 	
			if(count1<n)
			{
				printf("%d",shuzu[k][k1]);
				printf(" ");
			}else{
				printf("%d\n",shuzu[k][k1]);
			}		
		}
		
	} 
	*/

