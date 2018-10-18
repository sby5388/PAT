/*
本题要求对任意给定的正整数N，求方程X^2 + y^2 = N的全部正整数解。

输入格式：
输入在一行中给出正整数N（≤10000）。

输出格式：
输出方程X^2 + y^2 = N的全部正整数解，其中X≤Y。每组解占1行，两数字间以1空格分隔，按X的递增顺序输出。如果没有解，则输出No Solution。

输入样例1：
884
输出样例1：
10 28
20 22
输入样例2：
11
输出样例2：
No Solution
*/
#include<stdio.h>
#include<math.h>
int isMi(int yy);
int main() {
	int N;
	scanf("%d",&N);
	int x = 1;
	int y = 0;
	int xx = x*x;
	int yy = N-xx;
	int empty_printf = 1;
	while(xx<N) {
		xx = x*x;
		yy = N-xx;
		y =  isMi(yy);
		if( y!=0) {
			if(xx<=yy) {
				printf("%d %d\n",x,y);
				empty_printf = 0;
				y=0;
			}
		}
		x++;
	}
	if(empty_printf){
		printf("No Solution");
	}

	return 0;
}
int isMi(int yy) {
	int y = (int)sqrt(yy);
	if(y*y==yy) {
		return y;
	}
	return 0;
}

