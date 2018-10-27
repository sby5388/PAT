#include <stdio.h>
/*
本题要求实现一个计算非负整数阶乘的简单函数，
使得可以利用该函数，计算1!+2!+?+10!的值。

函数接口定义：
double fact( int n );
其中n是用户传入的参数，其值不超过10。
如果n是非负整数，则该函数必须返回n的阶乘。

*/

double fact( int n );

int main(void) {
	int i;
	double sum;

	sum = 0;
	for(i = 1; i <= 10; i++)
		sum = sum + fact(i);

	printf("1!+2!+...+10! = %f\n", sum);
	return 0;
}

/* 你的代码将被嵌在这里 */

double fact( int n ){
	double result =1;
	while(n>0){
		result *= n;
		n--;
	}
	return result;
}
