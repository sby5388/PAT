/*
实验7-3-7 字符转换 （15 分）
本题要求提取一个字符串中的所有数字字符（'0'……'9'），将其转换为一个整数输出。

输入格式：
输入在一行中给出一个不超过80个字符且以回车结束的字符串。

输出格式：
在一行中输出转换后的整数。题目保证输出不超过长整型范围。

输入样例：
free82jeep5
输出样例：
825
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int index  = 0;
	while((chars[index]=getchar())!='\n') {
		index++;
	}
	int first = 1;
	for(int i=0; i<index; i++) {
		char c  = chars[i];
		if(c>='0'&&c<='9') {
			if(first==1) {
				if(c!='0') {
					printf("%c",c);
					first = 0;
				}
			}else{
				printf("%c",c);
			}
		}
	}
	if(first==1){
		printf("0");
	}
	return 0;
}

