/*

*/
#include<stdio.h>
#include<string.h>
#define MAX 81
int main() {
	//单个字符：%c
	//字符串：%s

	char str[MAX];
	//TODO  这里要读取的是一整行，而不是使用空格来作为输入结束的标志
	//	scanf("%s",&str);
	gets(str);
	int length = strlen(str);
	for(int i=length-1; i>=0; i--) {
		printf("%c",str[i]);
	}
	return 0;
}

