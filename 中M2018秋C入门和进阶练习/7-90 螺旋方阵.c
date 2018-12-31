/*
7-90 螺旋方阵 （20 分）
所谓“螺旋方阵”，是指对任意给定的N，
将1到N×N的数字从左上角第1个格子开始，按顺时针螺旋方向顺序填入N×N的方阵里。
本题要求构造这样的螺旋方阵。

输入格式：
输入在一行中给出一个正整数N（<10）。

输出格式：
输出N×N的螺旋方阵。每行N个数字，每个数字占3位。

输入样例：
5
输出样例：
  1  2  3  4  5
 16 17 18 19  6
 15 24 25 20  7
 14 23 22 21  8
 13 12 11 10  9
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);
	int point[N][N];
	//初始化
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			point[i][j] = 0;
		}
	}


	//赋值
	//方向值
	int right = 0;
	int down = 1;
	int left = 2;
	int up = 3;
	//当前方向
	int direction = 0;
	//当前数字的值
	int value =1;
	//数组下标
	int x = 0;
	int y = 0;
	while(value<=N*N) {

		if(direction%4==right) {
			//向右增加
			for(; y<N; y++) {
				if(point[x][y]==0) {
					point[x][y]=value;
					value++;
				} else {
					break;
				}
			}
			direction++;
			y--;
			x++;
		}



		if(direction%4==down) {
			//向下增加
			for(; x<N; x++) {
				if(point[x][y]==0) {
					point[x][y]=value;
					value++;
				} else {
					break;
				}
			}
			direction++;
			x--;
			y--;
		}



		if(direction%4==left) {
			//向左增加
			for(; y>=0; y--) {
				if(point[x][y]==0) {
					point[x][y]=value;
					value++;
				} else {
					break;
				}
			}
			direction++;
			y++;
			x--;
		}



		if(direction%4==up) {
			//向上增加
			for(; x>0; x--) {
				if(point[x][y]==0) {
					point[x][y]=value;
					value++;
				} else {
					break;
				}
			}
			direction++;
			x++;
			y++;
		}
	}



	//输出
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			printf("%3d",point[i][j]);
		}
		printf("\n");
	}

	return 0;
}


