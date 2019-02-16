/*
L1-039 古风排版 （20 分）
中国的古人写文字，是从右向左竖向排版的。本题就请你编写程序，把一段文字按古风排版。

输入格式：
输入在第一行给出一个正整数N（<100），是每一列的字符数。
第二行给出一个长度不超过1000的非空字符串，以回车结束。

输出格式：
按古风格式排版给定的字符串，每列N个字符（除了最后一列可能不足N个）。

输入样例：
4
This is a test case
输出样例：
asa T
st ih
e tsi
 ce s
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d\n",&N);
	char words[1000];
	char c;
	int length = 0;

	while((c=getchar())!='\n') {
		words[length++]=c;
	}

//	int N = 4;
//	char words[1000] ="This is a test case";
//	int length = 20;



	words[length]='\0';
	int count = length/N;
	if(length%4!=0) {
		count++;
	}


	for(int i=0; i<N; i++) {
		for(int k=length; k>-1; k--) {
//			printf("===\n");
			if(k%N==i) {
				printf("%c",words[k]);
			}
		}
		printf("\n");
	}

	return 0;
}

