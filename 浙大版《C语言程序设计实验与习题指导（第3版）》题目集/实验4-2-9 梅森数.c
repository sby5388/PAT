/*
实验4-2-9 梅森数 （20 分）
形如2^n - 1的素数称为梅森数（Mersenne Number）。例如2^2 -1 =3、2^3 -1=7都是梅森数。
1722年，双目失明的瑞士数学大师欧拉证明了2^31 - 1=2147483647是一个素数，
堪称当时世界上“已知最大素数”的一个记录。

本题要求编写程序，对任一正整数n（n<20），输出所有不超过
2^n - 1的梅森数。

输入格式：
输入在一行中给出正整数n（n<20）。

输出格式：
按从小到大的顺序输出所有不超过2^n -1的梅森数，每行一个。如果完全没有，则输出“None”。

输入样例：
6
输出样例：
3
7
31
*/
#include<stdio.h>
#include<math.h>
#define return return
int prime(long p);
int main() {

	int N;
	scanf("%d",&N);
	int count =0;
	for(int i=0; i<=N; i++) {
		long number = (long)(pow(2,i)-1);
		if(prime(number)) {
			count++;
			printf("%ld\n",number);
		}
	}
	if(count==0) {
		printf("None");
	}
	return 0;
}

int prime(long p) {
	if(p<2) {
		return 0;
	}
	if(p>3 && p%2==0) {
		return 0;
	}
	int count = 0;
	long min = 1;
	long max = (int)sqrt(p);
	for(long i=min; i<=max; i++) {
		if(0 == p%i) {
			count++;
		}
		if(count>1) {
			return 0;
		}
	}
	return 1;
}


