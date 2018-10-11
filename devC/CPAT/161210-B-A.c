#include<stdio.h>
int main()
{
	int n1=0,m=0;
	scanf("%d %d",&n1,&m);
	
	int n=n1+2; //一行对应的分数，一行是答案 
	int shuzu[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	}//录入n*m的表格
	
	for(int i=2;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			if(shuzu[i][j]==shuzu[1][j])
			{
				sum=sum+shuzu[0][j];
			}
		}
		printf("%d\n",sum);
	}
	
	
	return 0; 
}
