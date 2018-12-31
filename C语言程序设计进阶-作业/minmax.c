void minmax(int a[],int len,int *min,int *max);
#include<stdio.h>
#define return return
int main() {
//	int N;
//	scanf("%d",&N);
//	for(int i=1; i<20; i++) {
//		printf("%d,",i);
//	}

	int number[]= {12,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,55,32};
	int len  = sizeof(number)/sizeof(number[0]);
	int max = number[0];
	int min = number[0];
	minmax(number,len,&min,&max);
	printf("min = %d\n",min);
	printf("max = %d\n",max);
	return 0;
}
void minmax(int a[],int len,int *min,int *max) {
	for(int i=0;i<len;i++){
		if(a[i]<*min){
			*min = a[i];
		}
		if(a[i]>*max){
			*max =a[i];
		}
	}

}
