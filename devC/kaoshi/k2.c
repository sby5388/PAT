#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d/%d",&n,&m);
	if(n!=0&&m!=0)
	{		
		for(int i=2;i<=n&&i<=m;i++)
		{
			while(n%i==0&&m%i==0)
			{
				n=n/i;
				m=m/i;
			}
		}		
		printf("%d/%d",n,m);
	}
	return 0;
} 
