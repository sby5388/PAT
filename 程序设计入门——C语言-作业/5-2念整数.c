
/*
2念整数（5分）
题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。
当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi
输入格式:
一个整数，范围是[-100000,100000]。
输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。

输入样例：
-30
输出样例：
fu san ling
*/
#include<stdio.h>
#include<string.h>
void showChar(int position,int needSpace);
int main() {
	int number;
	int needSpace = 0;
	scanf("%d",&number);

	if(number==0) {
		showChar(0,needSpace);
		needSpace = 1;
		return 0;
	}

	int x=number;
	if(number<0) {
		showChar(-1,needSpace);
		needSpace = 1;
		x=0-number;
	}

	int ns = 0;
	int count = 0;
	while (x!=0) {
		int countt =x%10;
		count++;
		x=x/10;
		ns = ns*10 +countt;

	}

	int ns1 = ns;
	int count1=0;
	while(ns1!=0) {
		ns1/=10;
		count1++;
	}

	for(int i =0; i<count1; i++) {
		int w = ns%10;
		ns=ns/10;
		showChar(w,needSpace);
		needSpace = 1;
	}

	//最后用来补充0的个数
	if(count-count1) {
		do {
			showChar(0,needSpace);
			count1++;
		} while(count>count1);
	}
	return 0;

}
void showChar(int position,int needSpace) {
	char *number[] = {"fu","ling",
	                  "yi","er","san","si","wu",
	                  "liu","qi","ba","jiu"
	                 };
	if(needSpace) {
		printf(" ");
	}
	printf("%s",number[position+1]);
}

