/*
对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10
?9
?? 的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。

输入样例：
321
输出样例：
3 6
*/



















#include<stdio.h>
void start(int n);
int main(){
	int N;
	scanf("%d",&N);
	start(N);
	return 0;
}
void start(int n){
	int sum = 0;
	int count = 0;
	while(n>0){
		sum+=n%10;
		n/=10;
		count++;
	}
	printf("%d %d",count,sum);
}

