/*
实验7-1-11 求整数序列中出现次数最多的数（15 分）
本题要求统计一个整型序列中出现次数最多的整数及其出现次数。

输入格式：
输入在一行中给出序列中整数个数N（0<N≤1000），以及N个整数。数字间以空格分隔。

输出格式：
在一行中输出出现次数最多的整数及其出现次数，数字间以空格分隔。题目保证这样的数字是唯一的。

输入样例：
10 3 2 -1 5 3 4 3 0 3 2
输出样例：
3 4
*/
#include<stdio.h>
#define return return
int main() {
	int count[10] = {0};
	int N;
	scanf("%d",&N);
	int number[N];
	int count[N];
	int temp;
	for(int i=0; i<N; i++) {
		scanf("%d",&temp);
		int exist = 0;
		int position =-1;
		for(int j=0; j<i; j++) {
			if(number[j]==temp) {
				position = j;
				count[j] = count[j]+1;
				exist = 1;
				break;
			}
		}
	}

	return 0;
}


