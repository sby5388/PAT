/*
7-15 计算圆周率 （15 分）
根据下面关系式，求圆周率的值，直到最后一项的值小于给定阈值。
π/2 = 1 + 1/3 + 2!/(3*5) + 3!/(3*5*7) + ... + n!/(3*5*7*...*(2n+1)) + ...

输入格式：
输入在一行中给出小于1的阈值。

输出格式：
在一行中输出满足阈值条件的近似圆周率，输出到小数点后6位。

输入样例：
0.01
输出样例：
3.132157
*/
#include<stdio.h>
int main() {
	double N;
	scanf("%lf",&N);
	int i =0;
	double sum = 0.0f;
	double start = 1;

	while(start>N) {
		sum+=start;
		start = start*(i+1)/(2*i+3);
		i++;
	}
	sum+=start;
	printf("%.6lf",sum*2);
	return 0;
}
