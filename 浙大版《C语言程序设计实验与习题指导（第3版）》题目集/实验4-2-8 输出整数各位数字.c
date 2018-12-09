/*
实验4-2-8 输出整数各位数字 （15 分）
本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。

输入格式：
输入在一行中给出一个长整型范围内的非负整数。

输出格式：
从高位开始逐位输出该整数的各位数字，每个数字后面有一个空格。

输入样例：
123456
输出样例：
1 2 3 4 5 6
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	if(N==0) {
		printf("0 ");
		return 0;
	}
	int N1 = N;
	int length = 0;
	while(N>0) {
		length++;
		N = N/10;
	}
	int count[length];
	for(int i=0; i<length; i++) {
		count[i]=N1%10;
		N1=N1/10;
	}
	for(int i=length-1; i>=0; i--) {
		printf("%d ",count[i]);
	}
	return 0;
}
