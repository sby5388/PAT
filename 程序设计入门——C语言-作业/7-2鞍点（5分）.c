/*
2���㣨5�֣�
��Ŀ���ݣ�
����һ��n*n����A������A�İ�����һ��λ�ã�i��j����
�ڸ�λ���ϵ�Ԫ���ǵ�i���ϵ����������j���ϵ���С����һ������AҲ����û�а��㡣
����������ҳ�A�İ��㡣

�����ʽ:
����ĵ�1����һ��������n, ��1<=n<=100����
Ȼ����n�У�ÿһ����n��������ͬһ������������֮����һ�������ո�

�����ʽ��
������ľ�������ҵ����㣬��������±ꡣ
�±�Ϊ�������֣���һ���������кţ��ڶ����������кţ�����0��ʼ����
����Ҳ����������NO

��Ŀ���������ݱ�֤�˲�����ֶ�����㡣
����������

4
1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9

���������

2 1

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb*/
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

