/*
实验7-1-13 装箱问题 （20 分）
假设有N项物品，大小分别为S1,S2,…,Si,…,Sn，其中Si为满足1≤=Si≤100的整数。
要把这些物品装入到容量为100的一批箱子（序号1-N）中。
装箱方法是：对每项物品, 顺序扫描箱子，把该物品放入足以能够容下它的第一个箱子中。
请写一个程序模拟这种装箱过程，并输出每个物品所在的箱子序号，以及放置全部物品所需的箱子数目。

输入格式：
输入第一行给出物品个数N（≤1000）；第二行给出N个正整数Si(1≤=Si≤100，表示第i项物品的大小）。

输出格式：
按照输入顺序输出每个物品的大小及其所在的箱子序号，每个物品占1行，最后一行输出所需的箱子数目。

输入样例：
8
60 70 80 90 30 40 10 20
输出样例：
60 1
70 2
80 3
90 4
30 1
40 5
10 1
20 2
5
*/
#include<stdio.h>
#define return return
const int max = 100;
int main() {
	int N;
	scanf("%d",&N);

	int box1[N];
	int box2[N];
	int box3[N];
	for(int i= 0; i<N; i++) {
		scanf("%d",&box1[i]);
		box2[i] = 0;
		box3[i] = -1;
	}
	int count = 0;


	for(int i=0; i<N; i++) {
		for(int j=0;; j++) {
			if((100-box2[j])>=box1[i]) {
				box2[j]+=box1[i];
				box3[i] =j;
				break;
			}
		}
	}

	for(int i=0; i<N; i++) {
		if(box2[i]>0) {
			count++;
		}
		printf("%d %d\n",box1[i],box3[i]+1);
	}
	printf("%d",count);


	return 0;
}

