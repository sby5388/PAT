#include<stdio.h>
int main()
{
	//龟兔赛跑
	//感觉做不出来 
	int n;
	scanf("%d",&n);//比赛时间 
	int lg = 3 * n;//乌龟的距离
	int lt=0;//兔子的距离 
	
	int n1 = n/10;//10为单位
	int n2 = n%10;
	int zhouqi = n1/9;
	int yu = n1%9;
	if(yu<2){
		yu = (yu*10 + n2) *9); 
	}else{
		if(yu>1&&yu<5){
		yu = 180;
		}else{
			if()
		}
	}
	
	
}
