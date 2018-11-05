/*
本题要求你计算A-B。不过麻烦的是,A和B都是字符串 —— 即
从字符串A中把字符串B所包含的字符全删掉,剩下的字符组成的就是字符串A-B。
输入格式：
输入在2行中先后给出字符串A和B。两字符串的长度都不超过104,
并且保证每个字符串都是由可见的ASCII码和空白字符组成,最后以换行符结束。

输出格式：
在一行中打印出A-B的结果字符串。

输入样例：
I love GPLT!  It's a fun game!
aeiou
输出样例：
I lv GPLT!  It's  fn gm!

*/
#include<stdio.h>
#include<string.h>
#define MAX 105
int main() {
	char A[105];
	char B[105];
	int lengthA=0;
	char c;
	scanf("%c",&c);
	while(c!='\n') {
		A[lengthA]=c;
		lengthA++;
		scanf("%c",&c);
	}
	int lengthB = 0;
	scanf("%c",&c);
	while(c!='\n') {
		B[lengthB]=c;
		lengthB++;
		scanf("%c",&c);
	}
	for(int i=0; i<lengthB; i++) {
		char b = B[i];
		for(int j=0; j<lengthA; j++) {
			if(b==A[j]) {
				A[j]='\n';
			}
		}
	}
	for(int j=0; j<lengthA; j++) {
		if('\n'!=A[j]) {
			printf("%c",A[j]);
		}
	}

	return 0;
}
