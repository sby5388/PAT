/*
2鞍点（5分）
题目内容：
给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），
在该位置上的元素是第i行上的最大数，第j列上的最小数。一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。

输入格式:
输入的第1行是一个正整数n, （1<=n<=100），
然后有n行，每一行有n个整数，同一行上两个整数之间有一个或多个空格。

输出格式：
对输入的矩阵，如果找到鞍点，就输出其下标。
下标为两个数字，第一个数字是行号，第二个数字是列号，均从0开始计数
如果找不到，就输出NO

题目所给的数据保证了不会出现多个鞍点。
输入样例：

4
1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9

输出样例：

2 1

时间限制：500ms内存限制：32000kb*/
#include<stdio.h>

#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	int count[N][N];
	for(int i=0; i<N; i++) {
		for(int j = 0; j<N; j++) {
			scanf("%d",&count[i][j]);
		}
	}

	int isEmpty = 1;
	int max,min;
	int x =0,y = 0;
	for(int i=0; i<N; i++) {
		max =count[i][0];

		for(int j = 0; j<N; j++) {
			if(count[i][j]>=max) {
				max  = count[i][j];
				x =i;
				y =j;
			}
		}

		min = count[0][y];
		for(int k=0; k<N; k++) {
			if(count[k][y]<=min) {
				min = count[k][y];
			}
		}
		if(min==max) {
			printf("%d %d\n",x,y);
			isEmpty = 0;
		}

	}
	if(isEmpty) {
		printf("NO");
	}

	return 0;
}
int main2() {
	int N;
	scanf("%d",&N);
	int count[N][N];
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			scanf("%d",&count[i][j]);
		}
	}

	for(int j=0; j<N; j++) {
		int min = count[0][j];
		for(int i=0; i<N; i++) {
			if(count[i][j]<min) {
				min = count[i][j];
			}
		}

		for(int i=0; i<N; i++) {
			if( count[i][j]>min) {
				count[i][j]= -1;
			}
		}
	}

	for(int i=0; i<N; i++) {
		int max = count[i][0];
		for(int j=0; j<N; j++) {
			if(count[i][j]>=max) {
				max = count[i][j];
			}
		}
		for(int j=0; j<N; j++) {
			if(count[i][j]<max) {
				count[i][j] = -1;
			}
		}

	}




	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			printf("%d ",count[i][j]);
		}
		printf("\n");
	}


	int NO = 1;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(count[i][j]!=-1) {
				printf("%d %d\n",i,j);
				NO = 0;
				break;
			}
		}
	}
	if(NO) {
		printf("NO");
	}

	return 0;
}

