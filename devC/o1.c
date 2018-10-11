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
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\n",shuzu[i][j]);
		}
		
	}
	return 0;
} 
