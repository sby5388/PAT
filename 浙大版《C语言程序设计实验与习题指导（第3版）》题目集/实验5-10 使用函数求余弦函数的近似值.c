/*
实验5-10 使用函数求余弦函数的近似值 （15 分）
本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：
cos(x) = x^0/0! - x^2/2! + x^4/4! - x^6/6! + ...

函数接口定义：
double funcos( double e, double x );
其中用户传入的参数为误差上限e和自变量x；函数funcos应返回用给定公式计算出来、并且满足误差要求的cos(x)的近似值。
输入输出均在双精度范围内。

裁判测试程序样例：

输入样例：
0.01 -3.14
输出样例：
cos(-3.14) = -0.999899

*/
#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main() {
	double e, x;

	scanf("%lf %lf", &e, &x);
	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

	return 0;
}
/* 你的代码将被嵌在这里 */
double funcos( double e, double x ) {
	double result =0.0;
	int value = 1;
	int number =0;
	double jiecheng = 1;
	double mi =1.0;
	double temp = mi / jiecheng;
	printf("temp      = %.6lf\n",pow(x,0));
	while(abs(temp)> e) {
		result+=temp*value;
		//
		value*=-1;
		mi=mi*x*x;
		jiecheng = jiecheng*(number+1)*(number+2);
		temp = mi/jiecheng;
		number+=2;
		
		printf("result    = %.6lf\n",result);
		printf("mi        = %.6lf\n",mi);
		printf("jiecheng  = %.6lf\n",jiecheng);
		printf("temp      = %.6lf\n",temp);
		printf("value     = %d\n",value);
		printf("number    = %d\n",number);
	}


	return result;
}


