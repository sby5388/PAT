/*
7-90 �������� ��20 �֣�
��ν���������󡱣���ָ�����������N��
��1��N��N�����ִ����Ͻǵ�1�����ӿ�ʼ����˳ʱ����������˳������N��N�ķ����
����Ҫ������������������

�����ʽ��
������һ���и���һ��������N��<10����

�����ʽ��
���N��N����������ÿ��N�����֣�ÿ������ռ3λ��

����������
5
���������
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
	//��ʼ��
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			point[i][j] = 0;
		}
	}


	//��ֵ
	//����ֵ
	int right = 0;
	int down = 1;
	int left = 2;
	int up = 3;
	//��ǰ����
	int direction = 0;
	//��ǰ���ֵ�ֵ
	int value =1;
	//�����±�
	int x = 0;
	int y = 0;
	while(value<=N*N) {

		if(direction%4==right) {
			//��������
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
			//��������
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
			//��������
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
			//��������
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



	//���
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			printf("%3d",point[i][j]);
		}
		printf("\n");
	}

	return 0;
}


