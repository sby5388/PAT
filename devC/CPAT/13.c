#include<stdio.h>
//¼ÆËã½×³ËµÄºÍ 
int jiecheng(int k);
int main()
{
	int n;
	scanf("%d",&n);
//	int n=4;
	int ni=1;
	int sumi=0;
//	printf("%d",jiecheng(1));
	for(int i=1;i<=n;i++)
	{
		int ni=jiecheng(i);
		sumi=sumi+ni;
		
	}
	printf("%d",sumi);
	return 0;
}
int jiecheng(int k)
{
	int jiecheng=1;
	while(k>0)
	{
		jiecheng=jiecheng*k;
		k--;
	}
	return jiecheng;
}
