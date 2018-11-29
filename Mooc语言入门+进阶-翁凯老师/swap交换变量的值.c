/*
通过传递地址来改变参数的值
&a:对变量a取地址 
*/
#include<stdio.h>
void swap(int *a,int *b);
int main() {
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n",a,b);

	printf("swap(a,b)\n");
	swap(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

