#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int geshu[n];
	int n1=0;
	if(n%2==0)
	{
		n1=n/2-1;
	}else
	{
		n1=(n+1)/2;
	}
	
	for(int i=0;i<n;i++)
	{
		if(i==0||i==n)
		{
			geshu[i]=n;
		}
		else
		{
			if(i<n1)
			{
				geshu[i]=(i+1)*(n-2)
			}
		}
	
	}
	return 0;
}
