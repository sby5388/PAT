/*
7-101 简化的插入排序 （15 分）
本题要求编写程序，将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序。

输入格式：
输入在第一行先给出非负整数N（<10）；第二行给出N个从小到大排好顺序的整数；第三行给出一个整数X。

输出格式：
在一行内输出将X插入后仍然从小到大有序的整数序列，每个数字后面有一个空格。

输入样例：
5
1 2 4 5 7
3
输出样例：
1 2 3 4 5 7
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);

	int numbers[N];
	int numbers2[N+1];
	for(int i=0; i<N; i++) {
		scanf("%d",&numbers[i]);
	}
	int key;
	scanf("%d",&key);
	int insert = 0;
	for(int i=0; i<N; i++) {
		int temp =numbers[i];
		if(key>temp) {
			numbers2[i]=temp;
		} else {
			if(insert==0) {
				numbers2[i]=key;
				insert =1;
			}
			numbers2[i+1] = temp;
		}
	}
	if(insert==0) {
		numbers2[N]=key;
	}
	for(int i=0; i<N+1; i++) {
		printf("%d ",numbers2[i]);
	}
	return 0;
}


