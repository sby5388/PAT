#include<stdio.h>
int main()
{
	int n1;
	scanf("%d",&n1);
	if(n1>0&&n1<=100000)
	{
		int n=n1;
		int count=0;
		int jihua[n];
		int shiji[n];
		for(int i=0;i<n;i++)
		{
			jihua[i]=i+1;
			scanf("%d",&shiji[i]);
			if(shiji[i]>=jihua[i])
			{
				count++;
			}
		}	
		printf("%d",count);
	}	
	return 0;
}
