/*
本题要求编写程序，输出指定的由“*”组成的倒三角图案。

输入格式:
本题目没有输入。

输出格式:
按照下列格式输出由“*”组成的倒三角图案。

* * * *
 * * *
  * *
   *
*/

#include<stdio.h>
int main() {
	char c = '*';
	for(int i=4; i>0; i--) {
		for(int j=i; j>0; j--) {
			if(j>1) {
				printf("%c ",c);
			} else {
				printf("%c",c);
			}
		}
		if(i>1) {
			printf("\n");
		}
		int k = 4-i+1;
		if(i>1) {
			for(; k>0; k--) {
				printf(" ");
			}
		}
	}
	return 0;
}
