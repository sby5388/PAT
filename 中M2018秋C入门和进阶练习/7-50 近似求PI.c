/*
本题要求编写程序，根据下式求π的近似值，直到最后一项小于给定精度eps。
π/2 = 1 + 1/3 + 2!/(3*5) + 3!/(3*5*7) + ... + n!/(3*5*7*...*(2n+1)) + ..
输入格式：
输入在一行中给出精度eps，可以使用以下语句来读输入：

scanf("%le", &eps);
输出格式：
在一行内，按照以下格式输出π的近似值（保留小数点后5位）：

PI = 近似值
输入样例：
1E-5
输出样例：
PI = 3.14158
*/
#include<stdio.h>
int main() {
	double N;
	scanf("%le",&N);
	int i =0;
	double sum = 0.0f;
	double start = 1;

	while(start>N) {
		sum+=start;
		start = start*(i+1)/(2*i+3);
		i++;
	}
	sum+=start;
	printf("PI = %.5lf",sum*2);
	return 0;
}

