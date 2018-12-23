/*
实验7-1-8 输出数组元素 （15 分）
本题要求编写程序，对顺序读入的n个整数，顺次计算后项减前项之差，并按每行三个元素的格式输出结果。

输入格式：
输入的第一行给出正整数n（1<n≤10）。随后一行给出n个整数，其间以空格分隔。

输出格式：
顺次计算后项减前项之差，并按每行三个元素的格式输出结果。数字间空一格，行末不得有多余空格。

输入样例：
10
5 1 7 14 6 36 4 28 50 100
输出样例：
-4 6 7
-8 30 -32
24 22 50
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);
	int numbers[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&numbers[i]);
	}
	if(N>1) {
		for(int i=1; i<N; i++) {
			int temp =numbers[i]-numbers[i-1];
			int yu = i%3;
			switch(yu) {
				case 0:
					printf(" %d\n",temp);
					break;
				case 1:
					printf("%d",temp);
					break;
				case 2:
					printf(" %d",temp);
					break;
				default:
					break;
			}
		}
	}
	return 0;
}

