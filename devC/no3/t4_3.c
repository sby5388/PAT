#include <stdio.h>
//求两个数字的最大公约数 
int main(){
	
	int x = 1;
	int y = 1;
	int i = 1;
	int n = 0;
	int m = 1;
	scanf("%d %d",&x,&y);
	if(x>y){ 
		n = y;
	}else{
		n =x;
	}
	for( i=1;i<=n;i++){
		if(x%i==0 && y%i ==0){
			m = i;
			//printf("%d",m);
		}
		//printf("%d",m);
	}
	printf("%d",m);
	return 0;	
}
