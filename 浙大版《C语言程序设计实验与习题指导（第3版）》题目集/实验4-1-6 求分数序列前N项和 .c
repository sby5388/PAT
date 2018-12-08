/*
实验4-1-6 求分数序列前N项和 （15 分）
本题要求编写程序，计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。
注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，精确到小数点后两位。题目保证计算结果不超过双精度范围。

输入样例:
20
输出样例:
32.66
*/
#include<stdio.h>
void start(long N);
double start2(long N);
int main() {
//	long N;
//	scanf("%ld",&N);
//	start(N);

	long number =26530;
	double result = start2(number);
	while(result>0) {
		printf("%.2lf\n",result);
		number++;
		result = start2(number);
	}
	printf("---%ld",number);

	return 0;
}
void start(long N) {
	double sum = 0;
	int fz = 2;
	int fm = 1;
	int temp;
	while(N>0) {
		sum+=1.0*fz/fm;
		temp = fz;
		fz = fm+fz;
		fm =temp;
		N--;
	}
	printf("%.2lf",sum);
}
double start2(long N) {
	double sum = 0;

	long fz = 2;
	long fm = 1;
	long temp;
	while(N>0) {
		sum+=1.0*fz/fm;
		temp = fz;
		fz = fm+fz;
		fm =temp;
		N--;
	}
//	printf("%.2lf",sum);
	return sum;
}

