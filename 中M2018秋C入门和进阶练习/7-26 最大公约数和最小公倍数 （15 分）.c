/*
7-26 ���Լ������С������ ��15 �֣�
����Ҫ���������������������Լ������С��������

�����ʽ:
������һ���и�������������M��N����1000����

�����ʽ:
��һ����˳�����M��N�����Լ������С�������������ּ���1�ո�ָ���

��������:
511 292
�������:
73 2044
*/


#include<stdio.h>
int main() {
	int M,N;
	scanf("%d %d",&M,&N);
	if(M*N==0) {
		return 0;
	}

	if(M==N) {
		printf("%d %d",N,M);
		return 0;
	}
	if(M<N) {
		int temp=M;
		M=N;
		N = temp;
	}
	// let M > N

	if(M%N==0) {
		printf("%d %d",N,M);
		return 0;
	}


	int max = N;
	while(max>1) {
		if(0==M%max && 0==N%max) {
			break;
		}
		max--;
	}

	int min = M*N/max;

	printf("%d %d",max,min);
	return 0;

}

