/*
6-11 ���Զ�����Ԫ�����е���λ�� ��25 �֣�
����Ҫ��ʵ��һ����������N������Ԫ��A[]����λ�����������е�[N/2+1]���Ԫ�ء����м���Ԫ�ص�����Ϊ�Զ����ElementType��

�����ӿڶ��壺
ElementType Median( ElementType A[], int N );
���и�������Ԫ�ش��������A[]�У�������N������Ԫ�ظ������ú����뷵��N��A[]Ԫ�ص���λ������ֵҲ������ElementType���͡�

���в��Գ���������
����������
3
12.3 34 -5
���������
12.30
*/

#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main () {
	ElementType A[MAXN];
	int N, i;

	scanf("%d", &N);
	for ( i=0; i<N; i++ ) {
		scanf("%f", &A[i]);
	}
	printf("%.2f\n", Median(A, N));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
ElementType Median( ElementType A[], int N ) {
	ElementType B[N];
	ElementType min = 0;
	int middle = N/2+1;
	for(int i=0; i<N; i++) {
		min = A[0];
		for(int j = i; j<N; j++) {
			if(A[j]<=min) {
				min =A[j];
			}
			//��Ҫ��¼��С����±�
		}
		B[i] = min;
		A[i] = A[0];
	}

	return B[middle];
}


