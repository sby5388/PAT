#include<stdio.h>
//#include<string.h>
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
			for(int j=0;j<n;j++)
			{
				printf("%s",c);
			}
			printf("\n");
		}
	}
	
	return 0;
}
