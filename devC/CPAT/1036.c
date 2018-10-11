#include<stdio.h>
int main()
{
	char c[2];
	int n=0;
	int m=0;
	scanf("%d %s",&m,&c);
	if(m>=3&&m<=21)
	{
		n=m;
	
	//	printf("n=%d\n",n);
	//	printf("c=%s\n",c);
	//	int n1=n/2;
		int n1;
		if(n%2==0)
		{
			n1=n/2;	
		}else
		{
			n1=(n+1)/2;
		}
		for(int i=0;i<n1;i++)
		{
			if(i==0||i==(n1-1))
			{
				for(int j=0;j<n;j++)
				{
					printf("%s",c);
				}
				printf("\n");
			}
			else
			{
				for(int j=0;j<n;j++)
				{
					if(j==0||j==(n-1))
					{
						printf("%s",c);
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
	}
}
