/*
7-26 最大公约数和最小公倍数 （15 分）
本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。

输入样例:
511 292
输出样例:
73 2044
*/


#include<stdio.h>
int main() {
	int M,N;
	scanf("%d %d",&M,&N);
	if(M*N==0) {
		return 0;
	}

	if(M==N) {
		printf("%d %d",N,M);
		return 0;
	}
	if(M<N) {
		int temp=M;
		M=N;
		N = temp;
	}
	// let M > N

	if(M%N==0) {
		printf("%d %d",N,M);
		return 0;
	}


	int max = N;
	while(max>1) {
		if(0==M%max && 0==N%max) {
			break;
		}
		max--;
	}

	int min = M*N/max;

	printf("%d %d",max,min);
	return 0;

}

