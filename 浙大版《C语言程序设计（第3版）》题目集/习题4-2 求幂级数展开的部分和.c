/*
习题4-2 求幂级数展开的部分和 （20 分）
已知函数e^x
可以展开为幂级数1 + x + x^2/2! + x^3/3! + ... +x^k/k! + ...
。现给定一个实数x，要求利用此幂级数部分和求e^x的近似值，
求和一直继续到最后一项的绝对值小于0.00001。

输入格式:
输入在一行中给出一个实数x∈[0,5]。

输出格式:
在一行中输出满足条件的幂级数部分和，保留小数点后四位。

输入样例:
1.2
输出样例:
3.3201
*/
#include<stdio.h>
#include<math.h>
#define return return
//各种运行超时
int main() {
	double N;
	scanf("%lf",&N);
	double sum = 1;
	double temp =0.0;
	double fz = 1;
	long fm = 1;
	int count = 1;

	while(1) {

		fz *= N;
		fm *= count;
		temp = fz/fm;
		sum += temp;
		count++;
		if(abs(temp)<0.00001) {
			break;
		}
	}
	printf("%.4lf",sum);

	return 0;
}

