#include<stdio.h>
int main()
//¼ÆËãÖÜÐ½ 
{
	int nian,zhou;
	scanf("%d %d",&nian,&zhou);
	int gongzi=30;
	if(nian>=5)
	{
		gongzi=50;	
	}
	double zhouxin=0.0;
	if(zhou<=40)
	{
		zhouxin=gongzi*zhou;
	}else
	{
		zhouxin=gongzi*40+(zhou-40)*1.5*gongzi;
	}
	printf("%.2f",zhouxin);
	
} 
