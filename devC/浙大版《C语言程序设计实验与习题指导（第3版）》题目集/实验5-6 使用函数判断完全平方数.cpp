#include <stdio.h>
#include <math.h>

/*
本题要求实现一个判断整数是否为完全平方数的简单函数。

函数接口定义：
int IsSquare( int n );
其中n是用户传入的参数，在长整型范围内。
如果n是完全平方数，则函数IsSquare必须返回1，否则返回0。
*/
int IsSquare( int n );

int main() {
	int n;

	scanf("%d", &n);
	if ( IsSquare(n) ) printf("YES\n");
	else printf("NO\n");

	return 0;
}

/* 你的代码将被嵌在这里 */

int IsSquare( int n ){
	int max = (int)sqrt(n);
	if(max*max == n){
		return 1;
	}
	return 0;
}
