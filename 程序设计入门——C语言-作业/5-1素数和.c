/*
题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入格式:
两个整数，第一个表示n，第二个表示m。

输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入样例：
2 4
输出样例：
15

时间限制：500ms内存限制：32000kb
*/
#include<stdio.h>
int prime(int p);
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int primes[m];
//	for(int i=0; i<m; i++) {
//		primes[i] = 0;
//	}
	int count  = 0;
	int i = 2;
	while(1) {
		if(prime(i)) {
			primes[count] = i;
			count++;
			if(count==m) {
				break;
			}
		}
		i++;
	}
	int sum = 0;
	for(int i=n-1; i<m; i++) {
		//printf("%d %d\n",i,primes[i]);
		sum+=primes[i];
	}
	printf("%d",sum);

	return 0;
}
int prime(int p) {
	if(p<2) {
		return 0;
	}
	if(p>3 && p%2==0) {
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

