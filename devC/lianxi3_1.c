#include <stdio.h>
int main()
{
	int number = 0;
	int i = 0;
	scanf("%d",&number);
	for (i =1;number>9;i++)
	{
		number/=10;
	}
	printf("%d",i);
	return 0;
}
