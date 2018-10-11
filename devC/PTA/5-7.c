#include<stdio.h>
int main()
{
	int xs,fz;
	scanf("%d:%d",&xs,&fz);
	if(xs>=12)
	{
		if(xs>12)
		{
			xs=xs-12;
		}
		printf("%d:%d PM",xs,fz);
	}else
	{
		printf("%d:%d AM",xs,fz);
	}
	return 0;
}
