/*
实验3-1 求一元二次方程的根 （20 分）
本题目要求一元二次方程的根，结果保留2位小数。

输入格式:
输入在一行中给出3个浮点系数a、b、c，中间用空格分开。

输出格式:
根据系数情况，输出不同结果：

1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；

2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，
先输出虚部为正的，后输出虚部为负的；

3)如果方程只有一个根，则直接输出此根；

4)如果系数都为0，则输出"Zero Equation"；

5)如果a和b为0，c不为0，则输出"Not An Equation"。

输入样例1:
2.1 8.9 3.5
输出样例1:
-0.44
-3.80
输入样例2:
1 2 3
输出样例2:
-1.00+1.41i
-1.00-1.41i
输入样例3:
0 2 4
输出样例3:
-2.00
输入样例4:
0 0 0
输出样例4:
Zero Equation
输入样例5:
0 0 1
输出样例5:
Not An Equation
*/
#include<stdio.h>
int main() {
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if (a == 0.0) {
		if(b == 0.0 ) {
			if(c == 0.0) {
				printf("Zero Equation");
			} else {
				printf("Not An Equation");
			}
		} else {
			printf("%.2lf",(0.0-c)/b);
		}
	} else {
		//一元二次函數的求根公式、有解判定条件
		double flag = b*b - 4*a*c;
		printf("%.2lf\n",flag);
		if(0.0 == flag) {
			printf("%.2lf",(0.0-b)/(2*a));
		} else if(flag>0) {
			double x1 = (0.0-b+sqrt(flag))/(2*a);
			double x2 = (0.0-b-sqrt(flag))/(2*a);
			printf("%.2lf\n%.2lf",x1,x2);
		} else {
			//复数怎么算来着？ 
		}
	}
	return 0;
}

