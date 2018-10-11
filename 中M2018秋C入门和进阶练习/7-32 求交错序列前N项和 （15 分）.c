/*
本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，结果保留三位小数。

输入样例:
5
输出样例:
0.917
*/
#include<stdio.h>
double getSum(int N);

int main() {
	int N;
	scanf("%d",&N);
	printf("%.3lf",getSum(N));
	return 0;
}
double getSum(int N) {
	double sum = 0 ;
	int value = 1;
	for(int i=0; i<=N; i++) {
		if(i%2==0) {
			value = -1;
		} else {
			value =1;
		}
		sum+=value*i*1.0/(i*2-1);
	}


	return sum;
}
