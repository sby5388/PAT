#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int shuzu[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&shuzu[i]);
	}
	for(int i=0;i<n;i++)
	{
	//	printf("%d\n",shuzu[i]);
		sum=sum+shuzu[i];
	}
	sum=(n-1)*sum*11;
	printf("%d",sum);
	return 0;
}
