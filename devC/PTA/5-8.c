#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=60)
	{
		printf("Speed: %d - OK",n);
	}
	else
	{
		printf("Speed: %d - Speeding",n);
	}
	return 0;
}
