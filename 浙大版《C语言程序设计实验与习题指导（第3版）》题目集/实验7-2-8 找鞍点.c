/*
ʵ��7-2-8 �Ұ��㣨20 �֣�
һ������Ԫ�صġ����㡱��ָ��λ���ϵ�Ԫ��ֵ�ڸ���������ڸ�������С��

����Ҫ���д������һ��������n�׷���İ��㡣

�����ʽ��
�����һ�и���һ��������n��1��n��6�������n�У�ÿ�и���n������������Կո�ָ���

�����ʽ��
�����һ���а��ա����±� ���±ꡱ���±��0��ʼ���ĸ�ʽ��������λ�á�
������㲻���ڣ��������NONE������Ŀ��֤�����ľ����������һ�����㡣

��������1��
4
1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9
�������1��
2 1
��������2��
2
1 7
4 1
�������2��
NONE
*/
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
		printf("NONE");
	}

	return 0;
}




