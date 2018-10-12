/*
本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印

*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；
各行符号中心对齐；相邻两行符号数差2；
符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
输入格式:
输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。
输出格式:
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

输入样例:
19 *
输出样例:
*****
 ***
  *
 ***
*****
2

*/
#include<stdio.h>
int getMax(int kk);
int main() {
	int n=0;
	char c[2];
	scanf("%d %s",&n,&c);

	int min,max,maxi;
	int yu=0;
	for(int i=1;; i++) {
		min=getMax(i);
		max=getMax(i+1);
		if(min<=n && max>n) {
			maxi=i;
			yu=n-min;
			break;
		}
	}
	int len=2*maxi-1;//输出的行数
	int shuzu[len];
	int len2=len;
	for(int i=0; i<len; i++) {
		if(i<=(maxi-1)) {
			shuzu[i]=len2;
			len2=len2-2;
		} else {
			shuzu[i]=shuzu[len-i-1];
		}
	}
	for(int i=0; i<len; i++) {
		int ling=((len-shuzu[i])/2);
		while(ling>0) {
			printf(" ");//输出空格
			ling--;
		}
		do {
			printf("%s",c);//输出c
			shuzu[i]--;
		} while(shuzu[i]>0);
		printf("\n");
	}
	printf("%d",yu);

	return 0;
}
int getMax(int kk) {
	int k1;
	k1=2*kk*kk-1;
	return k1;
}


