/*
����1 - ��С��Χ���Σ�10�֣�
��Ŀ���ݣ�
����һ���ά���꣬��ʾֱ������ϵ�ڵ�һ������ε������Ķ�����������С�
�����ܰ�Χ�������ε�ƽ�������������С���Σ�����������½Ǻ����Ͻǵ����ꡣ
�����ʽ
��һ����һ��������n��ʾ������������ڶ�����n�����������α�ʾÿ�����������x��yֵ��

�����ʽ��
�ĸ����������α�ʾ������ľ��ε����½ǵ������x��yֵ�����Ͻ������x��yֵ����������лس����С�

����������
5
1 1 1 4 3 7 4 4 4 1

���������

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

