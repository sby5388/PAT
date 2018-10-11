#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int duiwu[1000]={0};
	int duiyuan;
	int qqq[10000]={0};
	int k;
	int m;
	for(int i=0;i<n;i++)
	{
		scanf("%d-%d %d",&k,&duiyuan,&m);
		qqq[i]=k;
		duiwu[k]=duiwu[k]+m;
	}
	int max=duiwu[qqq[0]];;
	int i1=0;
	for(int i=0;i<n;i++)
	{
		if(duiwu[qqq[i]]>=max)
		{
			max=duiwu[qqq[i]];
			i1=i;
		}
	}
	printf("%d %d",qqq[i1],max);
//	printf("%d",duiwu[k]);
//	for(int i=0;i<1000;i++)
//	{
//		if(duiwu[i]!=0)
//		{
//			printf("i=%d,duiwu[i]=%d",i,duiwu[i]);
//		}
//		//printf("i=%d,",duiwu[i]);
//	}
}
