/*
给定一个n×n的方阵，本题要求计算该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。副对角线为从矩阵的右上角至左下角的连线。

输入格式:
输入第一行给出正整数n（1<n≤10）；随后n行，每行给出n个整数，其间以空格分隔。

输出格式:
在一行中给出该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。

输入样例:
4
2 3 4 1
5 6 1 1
7 1 8 1
1 1 1 1
输出样例:
35
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	int sum = 0;
	int temp=0;
	int max = N-1;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			scanf("%d",&temp);
			if(i<max && j<max && (i+j)!=max) {
				sum+=temp;
			}
		}
	}
	printf("%d",sum);
	return 0;
}

