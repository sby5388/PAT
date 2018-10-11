#include<stdio.h>
int main()
{
//	int n=6;
//	int m;
//	scanf("%d",&m);
//	int xian[6]={1,2,3,4,5,6};
//	int hou[6];
	int n;
	int m;
	scanf("%d %d",&n,&m);
	int xian[n];
	int hou[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&xian[i]);	
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
		k=i+m;
		while(k>=n)
		{
			k=k-n;
		}
		hou[k]=xian[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(count==0)
		{
			printf("%d",hou[i]);
			count++;
		}else
		{
			printf(" %d",hou[i]);
		}
	}
//	printf("\n");
	
	return 0;
}
