#include<stdio.h>
void sushu(int m);
int main()
{
	sushu(4);
///	int n;
//	scanf("%d",&n);
//	printf("%d",n);
/*	if(n<=10)
	{	
		int shuzu[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&shuzu[i]);
		}
		for(int k=0;k<n;k++)
		{
			sushu(shuzu[k]);
		}
	}
	*/
	return 0;
}
void sushu(int m)
{
	int count=0;
	for(int i=2;i<m;i++)
	{
		if(m%i==0)
		{
			count++;
		}
		if(count==2)
		{
			printf("No\n");
			break; 
		} 
	}
	if(count<2)
	{
		printf("Yes\n");
	}
	
}
