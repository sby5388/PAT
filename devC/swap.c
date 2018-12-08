#include<stdio.h>
void swap(int *a,int *b);
int main() {
	int a =10;
	int b=20;
	swap(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}
/*
交换2个参数数字 
*/
void swap(int *a,int *b) {
	int temp =*a;
	*a=*b;
	*b=temp;
}

