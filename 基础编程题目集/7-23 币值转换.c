/*
输入一个整数（位数不超过9位）代表一个人民币值（单位为元），请转换成财务要求的大写中文格式。
如23108元，转换后变成“贰万叁仟壹百零捌”元。
为了简化输出，用小写英文字母a-j顺序代表大写数字0-9，
用S、B、Q、W、Y分别代表拾、百、仟、万、亿。于是23108元应被转换输出为“cWdQbBai”元。

输入格式：
输入在一行中给出一个不超过9位的非负整数。

输出格式：
在一行中输出转换后的结果。注意“零”的用法必须符合中文习惯。

输入样例1：
813227345
输出样例1：
iYbQdBcScWhQdBeSf
输入样例2：
6900
输出样例2：
gQjB
*/
#include<stdio.h>
#define YI 100000000
char numbers[10];
char danwei[5];
void initData();
void show(int N);
int main() {
	initData();
	int N;
	scanf("%d",&N);
//	N = 100;
	show(N);

	printf("%c",numbers[0]);
	printf("%c",numbers[9]);
	return 0;
}
void show(int N) {
//	printf("%c",danwei[2]);
	if(N>=YI) {
		printf("%c%c",numbers[N/YI],danwei[4]);
		N = N%YI;
	}

}
void initData() {
	for(int i=0; i<10; i++) {
		numbers[i]=97+i;
	}
	danwei[0]='S';
	danwei[1]='B';
	danwei[2]='Q';
	danwei[3]='W';
	danwei[4]='Y';
}

























