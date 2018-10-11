#include<stdio.h>
int main()
{
	int h,u,d;//深度，上什，下降
	scanf("%d %d %d",&h,&u,&d);
	int h1=h-1;
	int sj=0;
	if(u>=h)
	{
		sj=1;	
	}else
	{	
		while(h1>=0)
		{
			if(h1==u)
			{
				sj=sj+1;
				h1=h1-u;
			}else
			{
				sj=sj+2;
				h1=h1-u+d;
			}	
		}
	} 
	printf("%d",sj); 
}
