/*
本题要求实现一个字符串查找的简单函数。

函数接口定义：
char *search( char *s, char *t );
函数search在字符串s中查找子串t，返回子串t在s中的首地址。若未找到，则返回NULL。
输入样例1：
The C Programming Language
ram
输出样例1：
10
输入样例2：
The C Programming Language
bored
输出样例2：
-1
*/
#include <stdio.h>
//#include<string.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main() {
	char s[MAXS], t[MAXS], *pos;

	ReadString(s);
	ReadString(t);
	printf("%s\n",s);
	printf("%s\n",t);
	pos = search(s, t);
	if ( pos != NULL ) {
		printf("%d\n", pos - s);
	} else {
		printf("-1\n");
	}


	return 0;
}

/* 你的代码将被嵌在这里 */
char *search(char *s, char *t) {
	//todo 20181015
	int lengths = sizeof(s)/sizeof(s[0]);
	int lengtht = sizeof(t)/sizeof(t[0]);
	printf("%d %d\n",lengths,lengtht);



	return NULL;

}
void ReadString(char *s) {
	gets(s);
}
