/*
实验2-4-6 求幂之和 （15 分）
本题要求编写程序，计算sum=2^1+2^2+...+2^n 。可以调用pow函数求幂。

输入格式:
输入在一行中给出正整数n（≤10）。

输出格式:
按照格式“result = 计算结果”输出。

输入样例:
5
输出样例:
result = 62
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);

	int sum  = 0;
	int temp = 1;
	for(int i=1; i<=N; i++) {
		temp*=2;
		sum+=temp; 
	}
	printf("result = %d",sum);
	return 0;
}

