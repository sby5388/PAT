/*
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：
输入在一行中给出一个整数，如：1234。

提示：整数包括负数、零和正数。

输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。

输入样例：
-600
输出样例：
fu liu ling ling
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

