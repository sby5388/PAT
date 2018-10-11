#include <stdio.h>
//判断一个数是否为素数 
int main()
{
	int x = 0;
	int ISsushu = 1;
	int i=2;
	printf("输入一个整数x,判断是否为素数\n");
	scanf("%d",&x);
	printf("整数x是%d:\n",x);
	if(x<=1){
		printf("%d不是素数也不是合数！\n",x);
	}
	else{
		for(i=2;i<x;i++){
		   if(x%i ==0){
		    	ISsushu = 0;
		     	break;
	     	}
	   }
	   if(ISsushu == 0)
     	{
	 		printf("整数x=%d不是素数",x); 
		 
		}
		else{
				printf("整数x=%d是素数",x);
		} 
	}
	return 0;
} 
