/*
����Ҫ������������������N���󷽳�X^2 + y^2 = N��ȫ���������⡣

�����ʽ��
������һ���и���������N����10000����

�����ʽ��
�������X^2 + y^2 = N��ȫ���������⣬����X��Y��ÿ���ռ1�У������ּ���1�ո�ָ�����X�ĵ���˳����������û�н⣬�����No Solution��

��������1��
884
�������1��
10 28
20 22
��������2��
11
�������2��
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

