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
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main() {
//	char s[MAXS], t[MAXS], *pos;

//	ReadString(s);
//	ReadString(t);
	char	s[] = "The C Programming Language";
	char	t[] = "bored";

	printf("%s\n",s);
	printf("%s\n",t);
	char *pos = search(s, t);
	if ( pos != NULL ) {
		printf("%d\n", pos - s);
	} else {
		printf("-1\n");
	}


	return 0;
}

/* 你的代码将被嵌在这里 */
char *search(char *s, char *t) {
	char *result = NULL;
	//todo 20181015
	int ls = 0;
	while(s[ls]!='\0') {
		ls++;
	}

	int lt = 0;
	while(t[lt]!='\0') {
		lt++;
	}
//		printf("%d %d\n",ls,lt);

	for(int i=0; i<ls; i++) {
		int equals = 1;
		for(int j=0; j<lt; j++) {
			if(s[i+j]!=t[j]) {
				equals = 0;
				break;
			}
		}
		if(equals==1) {
			result =  &s[i];
			break;
		}
	}
	return result;

}
void ReadString(char *s) {
	gets(s);
}
