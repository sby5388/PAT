#include<stdio.h>
int main()
{
	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1==n2)
	{
		printf("C");
	}
	if(n1==n3)
	{
		printf("B");
	}
	if(n3==n2)
	{
		printf("A");
	}
	return 0;
} 
