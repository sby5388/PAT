#include <stdio.h>
/**
本题要求实现一个计算x
?n
?? （n≥0）的函数。

函数接口定义：
double mypow( double x, int n );
函数mypow应返回x的n次幂的值。题目保证结果在双精度范围内。

*/

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */

double mypow( double x, int n ){
	double result  = 1;
	while(n>0){
		result*=x;
		n--;
	}
	return result;
}
