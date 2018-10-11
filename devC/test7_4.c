#include<stdio.h>
//实际是：7.2寻找鞍点的问题，重新写可能会更好 
int main()
{
	int n=4;
	int shuzu[4][4]={{1,7,4,1},
					{4,8,3,6},
					{1,6,1,2},
					{0,7,8,9}};
	int maxi[4]={0};
	int minj[4]={0};
	//为了方便，n和数组使用固定的值
	/* 
	int n=1;
	scanf("%d",&n);
	int shuzu[n][n];
	//给数组键入数值 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	}
	*/
	//测试数组的键入是否正确
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<(n-1))
			{
				printf("%d  ",shuzu[i][j]);
			}else{
				printf("%d\n",shuzu[i][j]);
			}
//			printf("%d  ",shuzu[i][j]);
		}
	}
	
	//程序开始进入算法的部分
	
	for(int i=0;i<n;i++)
	{
		maxi[i]=shuzu[i][0];
		minj[i]=shuzu[0][i]; 
		
		for(int j=0;j<n;j++)
		{
			//找到每行中的最大值 
			if(shuzu[i][j]>=maxi[i])
			{
				maxi[i]=shuzu[i][j];
			}
			//找到每列中的最小值 
			if(shuzu[j][i]<=minj[i])
			{
				minj[i]=shuzu[j][i];
			}
		}
	}
	//测试上述代码的准确性 
	for(int i=0;i<n;i++)
	{
		printf("i=%d时，maxi=%d,minj=%d\n",i,maxi[i],minj[i]);
	}
	
	//找鞍点的部分
	int count2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(maxi[i]==minj[j])
			{
				printf("%d",maxi[i]);
				count2++;
			}
		}	
	}
	if(count2==0)
	{
		printf("NO\n");
	}
	
	
	
	return 0; 
	
}
