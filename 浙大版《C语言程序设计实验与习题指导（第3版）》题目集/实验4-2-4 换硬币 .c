/*
ʵ��4-2-4 ��Ӳ�� ��20 �֣�
��һ����Ǯ����5�֡�2�ֺ�1�ֵ�Ӳ�ң�Ҫ��ÿ��Ӳ��������һö���м��ֲ�ͬ�Ļ�����

�����ʽ:
������һ���и�����������Ǯ����x��(8,100)��

�����ʽ:
Ҫ��5�֡�2�ֺ�1��Ӳ�ҵ��������δӴ�С��˳��������ֻ�����
ÿ�����һ�ֻ�������ʽΪ����fen5:5��Ӳ������, fen2:2��Ӳ������, fen1:1��Ӳ������, total:Ӳ������������
���һ�������count = ������������

��������:
13
�������:
fen5:2, fen2:1, fen1:1, total:4
fen5:1, fen2:3, fen1:2, total:6
fen5:1, fen2:2, fen1:4, total:7
fen5:1, fen2:1, fen1:6, total:8
count = 4
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);
	int count  = 0;
	for(int i=(N/5); i>0; i--) {
		for(int j=(N/2); j>0; j--) {
			for(int k=N; k>0; k--) {
				if((i*5+j*2+k)==N) {
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
					count++;
				}
			}
		}
	}
	printf("count = %d",count);

	return 0;
}

