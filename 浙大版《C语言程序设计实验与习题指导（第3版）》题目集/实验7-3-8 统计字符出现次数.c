/*
实验7-3-8 统计字符出现次数 （20 分）
本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。

输入格式：
输入第一行给出一个以回车结束的字符串（少于80个字符）；第二行输入一个字符。

输出格式：
在一行中输出给定字符在给定字符串中出现的次数。

输入样例：
programming is More fun!
m
输出样例：
2
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int length = 0;
	while((chars[length]=getchar())!='\n') {
		length++;
	}
	char c;
	c = getchar();
	int count  = 0;
	for(int i=0; i<length; i++) {
		if(chars[i]==c) {
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

