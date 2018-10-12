/*
7-31 掉入陷阱的数字 （15 分）
对任意一个自然数N0,先将其各位数字相加求和，再将其和乘以3后加上1，变成一个新自然数N1；
然后对N1重复这种操作，可以产生新自然数N2 ；
……多次重复这种操作，运算结果最终会得到一个固定不变的数Nk ，就像掉入一个数字“陷阱”。
本题要求对输入的自然数，给出其掉入“陷阱”的过程。

输入格式:
在一行内给出一个自然数N0(N0<=30000)

输出格式:
对于输入的N0，逐行输出其掉入陷阱的步骤。第i行描述N掉入陷阱的第i步，
格式为： i:Ni（i≥1）。当某一步得到的自然数结果Nk (k≥1)与上一步Nk-1相同时，停止输出。

输入样例:
5
输出样例:
1:16
2:22
3:13
4:13
*/
#include<stdio.h>
int next(int number);
int main() {
	int N;
	scanf("%d",&N);

	int step =1;
	int temp = next(N);
	while(1) {
		printf("%d:%d\n",step,temp);
		if(N==temp) {
			break;
		}
		step++;
		N = temp;
		temp=next(temp);
	}

	return 0;
}
int next(int N) {
	int temp=0;
	while(N>0) {
		temp+=(N%10);
		N =N/10;
	}
	return temp*3 +1;
}

