/*
1009 说反话 （20 分）
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：
测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。
字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，
单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。

输出格式：
每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
作者: CHEN, Yue
单位: 浙江大学
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB

*/
#include<stdio.h>
#include<string.h>
int main() {
	char chars[81];
	gets(chars);
	int length = strlen(chars);
//	printf("%d\n",length);
//	printf("%s\n",chars);
	int end = length-1;
	int start = 0;
	for(int i=end; i>=0; i--) {
		
		if(chars[i]==' ') {
			start = i;
			for(int j=start; j<end+1; j++) {
				printf("%c",chars[j]);
			}
			//	printf("-");
		}
	}

	return 0;
}

