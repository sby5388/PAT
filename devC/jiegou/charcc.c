#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	c=getchar();
	int a=0;
	while(c!='\n' && c>='0' && c<='9')
	{
		//putchar(c);
		a+=(c-'0');
		
		c=getchar();	
	}
	printf("\n a=%d",a);
	return 0;
} 
