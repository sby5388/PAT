/*
实验7-3-9 字符串字母大小写转换 （15 分）
本题要求编写程序，对一个以“#”结束的字符串，将其小写字母全部转换成大写字母，
把大写字母全部转换成小写字母，其他字符不变输出。

输入格式：
输入为一个以“#”结束的字符串（不超过30个字符）。

输出格式：
在一行中输出大小写转换后的结果字符串。

输入样例：
Hello World! 123#
输出样例：
hELLO wORLD! 123
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int length = 0;
	while((chars[length]=getchar())!='#') {
		length++;
	}

	for(int i=0; i<length; i++) {
		char c = chars[i];
		if(c<='z'&&c>='a') {
			c =c-('a'-'A');
		} else if(c<='Z'&&c>='A') {
			c =c+('a'-'A');
		}
		printf("%c",c);
	}

	return 0;
}

