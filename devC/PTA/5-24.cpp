#include<stdio.h>
int main(){
	int  fz,fm;
	scanf("%d/%d",&fz,&fm);
//	printf("%d %d",fz,fm);
	int min=fz;//×îĞ¡Öµ 
	
		if(min>fm){
			min = fm;
		}
	
	int i=2;
	while(i<min){
		if(fz%i==0 && fm%i==0){
			fz = fz/i;
			fm = fm/i;
		}else{
			i++;		
			if(fz>=fm){
				min = fz;
			}else{
				min = fm;
			}
		}
	}
	printf("%d/%d",fz,fm);	
		
	
	return 0;
	
}
