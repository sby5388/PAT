#include <stdio.h>
#include <math.h>

/**
本题要求实现一个函数，对给定平面任意两点坐标
(x1,y1)和(x2,y2)，求这两点之间的距离。

函数接口定义：
double dist( double x1, double y1, double x2, double y2 );
其中用户传入的参数为平面上两个点的坐标(x1, y1)和(x2, y2)，函数dist应返回两点间的距离。
*/
double dist( double x1, double y1, double x2, double y2 );

int main() {
	double x1, y1, x2, y2;

	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("dist = %.2f\n", dist(x1, y1, x2, y2));

	return 0;
}

/* 你的代码将被嵌在这里 */
double dist( double x1, double y1, double x2, double y2 ) {

	double x3 = x1-x2;
	double y3 = y1-y2;
	double result  = sqrt(x3*x3+y3*y3);
	return result;
}
