/*
7-61 找最长的字符串 （15 分）
本题要求编写程序，针对输入的N个字符串，输出其中最长的字符串。

输入格式：
输入第一行给出正整数N；随后N行，
每行给出一个长度小于80的非空字符串，其中不会出现换行符，空格，制表符。

输出格式：
在一行中用以下格式输出最长的字符串：

The longest is: 最长的字符串
如果字符串的长度相同，则输出先输入的字符串。

输入样例：
5
li
wang
zhang
jin
xiang
输出样例：
The longest is: zhang
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d\n",&N);
	char word[N][81];
	int length[N];
	for(int i=0; i<N; i++) {
		printf("i ===== %d\n",i);
		int len = 0;
		char c = getchar();
		while(c!=' '&& c!='\t' && c!='\n') {
//			printf("i = %d\n",i);
//			printf("%c\n",c);
			word[i][len] = c;
			len++;
			c = getchar();
		}
		word[i][len] = '\0';
		length[i] = len;
	}
	int maxID = 0;
	int max = length[0];
	for(int i=0; i<N; i++) {
		if(length[i]>max) {
			max = length[i];
			maxID = i;
		}
	}

	printf("The longest is: %d",word[maxID]);


	return 0;
}

