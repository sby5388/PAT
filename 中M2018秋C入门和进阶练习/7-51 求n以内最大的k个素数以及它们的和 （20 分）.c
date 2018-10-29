/*
本题要求计算并输出不超过n的最大的k个素数以及它们的和。

输入格式:
输入在一行中给出n(10≤n≤10000)和k(1≤k≤10)的值。

输出格式:
在一行中按下列格式输出:

素数1+素数2+…+素数k=总和值
其中素数按递减顺序输出。若n以内不够k个素数，则按实际个数输出。

输入样例1:
1000 10
输出样例1:
997+991+983+977+971+967+953+947+941+937=9664
输入样例2:
12 6
输出样例2:
11+7+5+3+2=28
*/

#include<stdio.h>
#include<math.h>
int prime(int p);
void showPrime(int n,int k);
int main() {
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	showPrime(n,k);
	return 0;
}
void showPrime(int n,int K) {

	int k = K;
	int sum = 0;
	int isFirst = 1;
	//init
	int result[k];
	for(int i=0; i<k; i++) {
		result[i] = 0;
	}

	while(n>0) {
		if(prime(n)) {
			result[k]=n;
			k--;
		}
		n--;
		if(n==1 || k<0) {
			break;
		}
	}


	for(int i=K; i>0; i--) {
		int value = result[i];
		if(value!=0) {
			if(isFirst) {
				printf("%d",value);
				isFirst=0;
			} else {
				printf("+%d",value);
			}
			sum+=value;
		}
	}
	printf("=%d",sum);

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


