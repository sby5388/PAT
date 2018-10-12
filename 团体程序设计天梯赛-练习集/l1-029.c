#include<stdio.h>
int main()
{
	int h;
	scanf("%d",&h);
	if(h>100&&h<=300)
	{
		double tizhong=(h-100)*1.8;
		printf("%.1f",tizhong);
	}
	return 0;
}
