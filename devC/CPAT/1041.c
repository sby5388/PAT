#include<stdio.h>
int main() 
{
	int n=0;
	scanf("%d",&n);
	char  c[n][15];
	int shiji[n],zuowei[n];
	for(int i=0;i<n;i++)
	{
		shiji[i]=0;
		zuowei[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %d",&c[i],&shiji[i],&zuowei[i]);
	}
	int m=0;
	scanf("%d",&m);
	int chaxun[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&chaxun[i]);
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(shiji[j]==chaxun[i])
			{
				printf("%s %d\n",c[j],zuowei[j]);
			}
		}
	}
	
	
	return 0;
}
