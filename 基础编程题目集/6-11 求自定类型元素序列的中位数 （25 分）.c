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
	int N;

	scanf("%d", &N);
	for ( int i=0; i<N; i++ ) {
		scanf("%f", &A[i]);
	}

	printf("%.2f\n", Median(A, N));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
ElementType Median( ElementType A[], int N ) {
	for(int j=0;j<N-1;j++){
		for(int i=0; i<N-1-j; i++) {
		if(A[i]<A[i+1]) {
			ElementType temp = A[i];
			A[i]=A[i+1];
			A[i+1] = temp;
		}
	}
	}
	
//	if(N%2==0) {
//		return (A[N/2]+A[N/2-1])/2;
//	} else {
//		return A[(N-1)/2];
//	}
	return A[N/2];

//	for(i=0; i < N - 1; i++) {
//		for(j=0; j < N-i -1; j++) {
//			if(A[j]>A[j+1]) {
//				temp = A[j];
//				A[j] = A[j+1];
//				A[j+1] = temp;
//			}
//		}
//	}
//	return A[N/2];


}


