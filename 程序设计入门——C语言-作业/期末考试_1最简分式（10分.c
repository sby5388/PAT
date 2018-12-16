/*

*/
#include<stdio.h>
int main(){
	int fz,fm;
	scanf("%d/%d",&fz,&fm);
	if(fz==fm){
		printf("1/1");
	}else{
		int min = fz;
		if(fm<fz){
			min = fm;
		}
		for(;min>0;min--){
			if(fz%min==0&&fm%min==0){
				printf("%d/%d",fz/min,fm/min);
				break;
			}
		}
	}

	return 0;
}

