/*
7-113 计算分段函数[3]  （10 分）
本题目要求计算下列分段函数f(x)的值：
f(x) = x,x!=10;
f(x) = 1/x,x==10;
输入格式：
输入在一行中给出实数x。

输出格式：
在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。

输入样例1：
10
输出样例1：
f(10.0) = 0.1
输入样例2：
234
输出样例2：
f(234.0) = 234.0
*/
#include<stdio.h>
int main() {
	double N;
	//%lf:浮点数的输入
	scanf("%lf",&N);
	double result = 0.0;
	if(N==10){
		result = 1.0/N;
	}else{
		result = N;
	}
	printf("f(%.1lf) = %.1lf", N, result);
	return 0;
}


