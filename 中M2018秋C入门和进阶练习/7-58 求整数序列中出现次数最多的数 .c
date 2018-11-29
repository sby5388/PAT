/*
7-58 求整数序列中出现次数最多的数 （15 分）
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
typedef struct {
	int key;
	int value
} Number;
int main() {
	int N;
	scanf("%d",&N);
	int count[N];
	for(int i=0; i<N; i++) {
		count[i] = 0;
	}
	int temp;
	for(int i=0; i<N; i++) {
		scanf("%d",&temp);
		count[temp]=count[temp]+1;
	}
	int maxId =0;
	int max =count[0];
	for(int i=0; i<N; i++) {
		if(count[i]>max) {
			maxId = i;
			max = count[i];
		}
	}
	printf("%d %d",maxId,max);
	return 0;
}

