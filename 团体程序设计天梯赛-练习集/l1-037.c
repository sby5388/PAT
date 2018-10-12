#include<stdio.h>
int main()
{
	//(-100<=a,b< 100)
	int a=1;
	int b=1;
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(b>0)
	{
		float c=a*1.0/b;
		printf("%d/%d=%.2f",a,b,c);
	}
	else
	if(b==0)
	{
		printf("%d/%d=Error",a,b);
	}
	else
	if(b<0)
	{
		float c=a*1.0/b;
		printf("%d/(%d)=%.2f",a,b,c);	
	}
	return 0; 
	
} 
