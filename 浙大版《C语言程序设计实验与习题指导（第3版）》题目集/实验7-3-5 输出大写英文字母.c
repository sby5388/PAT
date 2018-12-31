/*
实验7-3-5 输出大写英文字母 （15 分）
本题要求编写程序，顺序输出给定字符串中所出现过的大写英文字母，
每个字母只输出一遍；若无大写英文字母则输出“Not Found”。

输入格式：
输入为一个以回车结束的字符串（少于80个字符）。

输出格式：
按照输入的顺序在一行中输出所出现过的大写英文字母，每个字母只输出一遍。若无大写英文字母则输出“Not Found”。

输入样例1：
FONTNAME and FILENAME
输出样例1：
FONTAMEIL
输入样例2：
fontname and filrname
输出样例2：
Not Found
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int index = 0;
	while((chars[index]=getchar())!='\n') {
		index++;
	}
	int empty  = 1;
	int numbers[26]= {0};
	for(int i=0; i<index; i++) {
		char c  = chars[i];
		if(c>='A'&&c<='Z') {
			if(numbers[c-'A']==0) {
				numbers[c-'A'] = 1;
				empty = 0;
				printf("%c",c);
			}
		}
	}
	if(empty) {
		printf("Not Found");
	}
	return 0;
}

