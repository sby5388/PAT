/*
7-89 交换最小值和最大值 （15 分）
本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。

注意：题目保证最大和最小值都是唯一的。

输入格式：
输入在第一行中给出一个正整数N（≤10），第二行给出N个整数，数字间以空格分隔。

输出格式：
在一行中顺序输出交换后的序列，每个整数后跟一个空格。

输入样例：
5
8 2 5 1 4
输出样例：
1 2 5 4 8
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);
	int numbers[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&numbers[i]);
	}
	if(N>0) {
		int min = numbers[0];
		int minID = 0;
		for(int i=0; i<N; i++) {
			int temp =numbers[i];
			if(temp<min) {
				min = temp;
				minID = i;
			}
		}
		int temp2 = numbers[0];
		numbers[0]  = min;
		numbers[minID] = temp2;

		int max = numbers[0];
		int maxID = 0;

		for(int i=0; i<N; i++) {
			int temp =numbers[i];
			if(temp>max) {
				max = temp;
				maxID = i;
			}
		}
		temp2  = numbers[N-1];
		numbers[N-1] = max;
		numbers[maxID] = temp2;
		for(int i=0; i<N; i++) {
			printf("%d ",numbers[i]);
		}
	}

	return 0;
}


