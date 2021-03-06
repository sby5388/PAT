/*
1逆序输出（10分）
题目内容：

你的程序会读入一系列的正整数，预先不知道正整数的数量，一旦读到-1，就表示输入结束。
然后，按照和输入相反的顺序输出所读到的数字，不包括最后标识结束的-1。

输入格式:
一系列正整数，输入-1表示结束，-1不是输入的数据的一部分。
输出格式：
按照与输入相反的顺序输出所有的整数，每个整数后面跟一个空格
以与后面的整数区分，最后的整数后面也有空格。

输入样例：
1 2 3 4 -1
输出样例：
4 3 2 1
*/
#include<stdio.h>
#include<stdlib.h>
#define return return
 typedef struct
const int MAX = 10000;
int main() {
	int numbers[MAX];
	for(int i=0; i<MAX; i++) {
		numbers[i] = 0;
	}
	int temp;
	scanf("%d",&temp);
	int index = 0;
	while(temp!=-1) {
		if(temp>0) {
			numbers[index] = temp;
			index++;
		}
		scanf("%d",&temp);
	}

	for(int i=index-1; i>=0; i--) {
		printf("%d ",numbers[i]);
	}

	return 0;
}

