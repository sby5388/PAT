#include<stdio.h>
int main()
{
	int fz01,fz02,fm01,fm02,k01;
	scanf("%d/%d %d/%d %d",&fz01,&fm01,&fz02,&fm02,&k01);
	if(fz01>0&&fz01<=1000 && fz02>0&&fz02<=1000 && fm01>0&&fm01<=1000 && fm02>0&&fm02>=1000 && k01>0&&k01<=1000)
	{
		int fz1=fz01;
		int fz2=fz02;
		int fm1=fm01;
		int fm2=fm02;
		int k1=k01;
		int ji=fm1*fm2*k1;
		fz1=fz1*ji;
		fz2=fz2*ji;
		 
		
		
	}
	return 0;
}
