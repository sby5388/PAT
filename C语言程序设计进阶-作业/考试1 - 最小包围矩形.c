/*
考试1 - 最小包围矩形（10分）
题目内容：
给定一组二维坐标，表示直角坐标系内的一个多边形的连续的顶点的坐标序列。
计算能包围这个多边形的平行于坐标轴的最小矩形，输出它的左下角和右上角的坐标。
输入格式
第一行是一个正整数n表示顶点的数量，第二行是n组整数，依次表示每个顶点坐标的x和y值。

输出格式：
四个整数，依次表示所计算的矩形的左下角的坐标的x、y值和右上角坐标的x、y值。输出最后带有回车换行。

输入样例：
5
1 1 1 4 3 7 4 4 4 1

输出样例：

1 1 4 7
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);
	int value[N][2];
	for(int i=0; i<N; i++) {
		scanf("%d %d",&value[i][0],&value[i][1]);
	}

	int maxX;
	int maxY;
	int minX;
	int minY;
	int tempx;
	int tempy;
	maxX = minX = value[0][0];
	maxY = minY = value[0][1];

	for(int i=1; i<N; i++) {
		tempx = value[i][0];
		tempy = value[i][1];

		if(tempx>maxX) {
			maxX = tempx;
		}
		if(tempx<minX) {
			minX = tempx;
		}
		if(tempy>maxY) {
			maxY = tempy;
		}
		if(tempy<minY) {
			minY = tempy;
		}
	}

	printf("%d %d %d %d\n",minX,minY,maxX,maxY);


	return 0;
}

