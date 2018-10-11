/**
对于输入的两个整数，按照要求输出其和差积商。

输入格式:
在一行内输入两个不超过100的非负整数a和b，中间以一个空格间隔，且保证b不为0。

输出格式:
共四行，格式是：

[a] + [b] = [a+b]
[a] - [b] = [a-b]
[a] * [b] = [a*b]
[a] / [b] = [a/b]
其中，带有方括号的内容（如[a]、[b]、[a+b]等）表示相应整数或运算结果的值，在输出时要用实际的值代替。

并且：如果a能够被b整除，那么a/b应输出为整数格式，否则a/b输出为带两位小数的格式。

提示：注意表达式中的空格。

输入样例1:
6 3
输出样例1:
6 + 3 = 9
6 - 3 = 3
6 * 3 = 18
6 / 3 = 2
输入样例2:
8 6
输出样例2:
8 + 6 = 14
8 - 6 = 2
8 * 6 = 48
8 / 6 = 1.33
*/
#include<stdio.h>
void first(int a,int b);
void second(int a,int b);
int main() {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	first(a,b);
	return 0;
}
void first(int a,int b) {
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	second(a,b);
}
void second(int a,int b) {
	int c = a/b;
	if(a==b*c) {
		printf("%d / %d = %d\n",a,b,c);
	} else {
		double d =a*1.0/b;
		printf("%d / %d = %.2lf\n",a,b,d);
	}
}

