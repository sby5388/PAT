#include<stdio.h>
int main(){
	//定义变量 
	int btc = 0;
	int i = 0;	 
	int utc = 0;

	
	//获取输入
	scanf("%d",&btc);
	i = btc/2400;
	btc = btc - 2400*i;
//	printf("%d\n",btc);
	if(btc>800){
		utc = btc - 800;
	}
	else{
		utc = btc + 1600;
	}
	printf("%d\n",utc); 
	return 0;
}
