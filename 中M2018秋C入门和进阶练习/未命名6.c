/*
7-41 计算阶乘和 （10 分）
对于给定的正整数N，需要你计算 S=1!+2!+3!+...+N!。
输入格式：
输入在一行中给出一个不超过10的正整数N。
输出格式：
在一行中输出S的值。
输入样例：
3
输出样例：
9
*/
#include<stdio.h>

int main() {
	int N= 0;
	scanf("%d",&N);
	int sum= 1;
	int count[N];
	count[1]=1;
	for(int i=2; i<=N; i++) {
		count[i]= i*count[i-1];
		sum+=count[i];
	}
	printf("%d",sum);
	return 0;
}


