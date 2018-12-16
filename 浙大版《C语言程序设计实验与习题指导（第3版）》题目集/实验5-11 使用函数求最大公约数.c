/*
实验5-11 使用函数求最大公约数 （10 分）
本题要求实现一个计算两个数的最大公约数的简单函数。

函数接口定义：
int gcd( int x, int y );
其中x和y是两个正整数，函数gcd应返回这两个数的最大公约数。

裁判测试程序样例：

输入样例：
32 72
输出样例：
8
*/
#include <stdio.h>
int gcd( int x, int y );
int main() {
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));

	return 0;
}

/* 你的代码将被嵌在这里 */
int gcd( int x, int y ) {
	int max = x;
	if(y>x) {
		max = y;
	}
	while(1) {
		if(x%max==0&&y%max==0) {
			break;
		}
		max--;
	}
	return max;
}
