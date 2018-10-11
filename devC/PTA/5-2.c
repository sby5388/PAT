#include<stdio.h>
int main()
//然后是几点 
{
	int n1,n2;//n2是分钟数 
	scanf("%d %d",&n1,&n2);
	int xs=n1/100;
	int fz=n1%100+n2;
	while(fz>59){
		fz=fz-60;
		xs++;
	}
	while(fz<0){
		fz=fz+60;
		xs--;
	}
	if(xs>9&&fz>9){
		printf("%d%d",xs,fz);
	}
	if(xs>9&&fz<10){
		printf("%d0%d",xs,fz);
	}
	if(xs<10&&fz>9){
		printf("%d%d",xs,fz);
	}
	if(xs<10&&fz<10)
	{
		printf("0%d0%d",xs,fz);
	}
	
	return 0; 
}//
