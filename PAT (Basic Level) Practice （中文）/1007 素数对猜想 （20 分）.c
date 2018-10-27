/*
让我们定义dn 为dn = P(n+1)-P(n)，其中Pi是第i个素数。显然有d1=1；
且对于n>1有dn是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N(<10^5)，请计算不超过N的满足猜想的素数对的个数。

输入格式:
输入在一行给出正整数N。

输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。

输入样例:
20
输出样例:
4*/
#include<stdio.h>
#include<math.h>
int prime( int p );
int main() {
	int N;
	scanf("%d",&N);
	int count = 0;
	int j =0;
	for(int i=3; i<N-1;) {
		if(prime(i)) {
			if(prime(i+2)) {
				count++;
			}
		}
		i+=2; 
	}
	printf("%d",count);
	return 0;
}
int prime( int p ) {
	if(p<2) {
		return 0;
	}
	if(p>3 && 0==(p%2)) {
		return 0;
	}
	int count = 0;
	int min = 1;
	int max = sqrt(p);
	for(int i=min; i<=max; i++) {
		if(0 == p%i) {
			count++;
		}
		if(count>1) {
			return 0;
		}
	}
	return 1;
}
