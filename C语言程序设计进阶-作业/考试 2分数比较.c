/*
考试 2分数比较（10分）
题目内容：

本题要求编写程序，比较两个分数的大小。

输入格式:
输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，
其中分子和分母全是int类型范围内的正整数。

输出格式：
在一行中按照“a1/b1 关系符 a2/b2”的格式输出两个有理数的关系。
其中“>”表示“大于”，“<”表示“小于”，“=”表示“等于”。

注意在关系符前后各有一个空格。

输入样例：
1/2 3/4
输出样例：
1/2 < 3/4
*/
#include<stdio.h>
#define return return
int main() {
	int fz1,fm1;
	int fz2,fm2;
	scanf("%d/%d",&fz1,&fm1);
	scanf("%d/%d",&fz2,&fm2);

	printf("%d/%d",fz1,fm1);
//	int value = fz1*fm2 - fm1*fz2;
	double value  = fz1*1.0/fm1 - fz2*1.0/fm2;
	if(value>0) {
		printf(" > ");
	} else if(value==0) {
		printf(" = ");
	} else {
		printf(" < ");
	}
	printf("%d/%d",fz2,fm2);

	return 0;
}

