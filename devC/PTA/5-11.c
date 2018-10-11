#include<stdio.h>
int main()
{
	//分段收水费
	float n;
	scanf("%f",&n);
	if(n<=15.0)
	{
		printf("%.2f",n*4.0/3);	
	}else
	{
		printf("%.2f",n*2.5-17.5);	
	}
	return 0;
} 
