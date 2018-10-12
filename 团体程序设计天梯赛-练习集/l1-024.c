#include<stdio.h>
int main()
{
	int d=0;
	scanf("%d",&d);
	if(d>=1 && d<=7)
	{	
		int d2=d+2;
		if(d2==8)
		{
			d2=1;
		}else
		{
			if(d2==9)
			{
				d2=2;
			}
		}
		printf("%d\n",d2);
	}
	return 0;
} 
