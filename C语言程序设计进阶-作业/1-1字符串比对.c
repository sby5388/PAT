/*
1字符串比对（10分）
题目内容：

题目说起来很简单，你会读到两个字符串，每个字符串占据一行，
每个字符串的长度均小于10000字符，而且第一个字符串的长度小于第二个字符串的。
你的程序要找出第一个字符串在第二个字符串中出现的位置，输出这些位置，如果找不到，则输出-1。

注意，第一个字符的位置是0。
注意，第一个字符串在第二个字符串中的位置可能不止一处。
注意，字符串中可能含有空格。
注意，两个字符串的长度一定大于0。

输入格式:

两个字符串，一行一个。

输出格式：
第一个字符串在第二个字符串中出现的位置，按照从小到到的顺序排列，每个数字后面有一个空格。
如果在第二个字符串中找不到第一个字符串，则输出-1。

输入样例：
abba
ababbba abbabbabbabbaacc

输出样例：

8 11 14 17
*/
#include<stdio.h>
#define return return
const int MAX = 10001;
int main() {
	char charA[MAX];
	char sub[MAX];
	
	int length2 = 0;
	while((sub[length2]=getchar())!='\n') {
		length2++;
	}
	sub[length2] = '\0';
	int length1 = 0;
	while((charA[length1]=getchar())!='\n') {
		length1++;
	}
	charA[length1]='\0';
	int empty = 1;

	for(int i=0;i<length1;i++){
		int exist = 1;
		for(int j=0;j<length2;j++){
			if(charA[i+j]!=sub[j]){
				exist = 0;
				break;
			}
		}
		if(exist){
			empty = 0;
			printf("%d ",i);
		}
		
	}

	if(empty) {
		printf("-1");
	}
	return 0;
}

