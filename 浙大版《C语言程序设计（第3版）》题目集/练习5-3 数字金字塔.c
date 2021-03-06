/*
练习5-3 数字金字塔 （15 分）
本题要求实现函数输出n行数字金字塔。

函数接口定义：
void pyramid( int n );
其中n是用户传入的参数，为[1, 9]的正整数。要求函数按照如样例所示的格式打印出n行数字金字塔。注

意每个数字后面跟一个空格。
输入样例：
5
输出样例：
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include <stdio.h>
void pyramid( int n );
int main() {
	int n;

	scanf("%d", &n);
	pyramid(n);

	return 0;
}

/* 你的代码将被嵌在这里 */
void pyramid( int n ) {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n-i-1; j++) {
			printf(" ");
		}
		for(int k=0; k<=i; k++) {
			printf("%d ",i+1);
		}
		printf("\n");
	}
}

