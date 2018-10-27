#include <stdio.h>

/*
本题要求实现符号函数sign(x)。
函数接口定义：
int sign( int x );
其中x是用户传入的整型参数。符号函数的定义为：
	若x大于0，sign(x) = 1；
	若x等于0，sign(x) = 0；
	否则，sign(x) = -1。
*/
int sign( int x );

int main() {
	int x;

	scanf("%d", &x);
	printf("sign(%d) = %d\n", x, sign(x));

	return 0;
}

/* 你的代码将被嵌在这里 */
int sign( int x ) {
	if(0==x) return 0;
	if(0<=x) return 1;
	if(0>=x) return -1;
}

