#include<stdio.h>
int main() 
{
	char n;
	int shuzu[2];
	for(int i=0;i<2;i++)
	{
		shuzu[i]=0; 
		scanf("%1c",&n);
		shuzu[i]=n;
	}
	for(int i=0;i<2;i++)
	{
		printf("%d ",shuzu[i]);
	}
	return 0;
}
