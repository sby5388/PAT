#include <stdio.h>

#define MAXN 10
/*

����Ҫ��ʵ��һ������������N�����������������ĺͣ�ͬʱʵ��һ���ж���ż�Եĺ�����

�����ӿڶ��壺
int even( int n );
int OddSum( int List[], int N );
���к���even�������û�����Ĳ���n����ż�Է�����Ӧֵ��
��nΪż��ʱ����1�����򷵻�0��
����OddSum������㲢���ش����N������List[]�����������ĺ͡�
*/
int even( int n );
int OddSum( int List[], int N );

int main() {
	int List[MAXN], N, i;
	scanf("%d", &N);

	for ( i=0; i<N; i++ ) {
		scanf("%d", &List[i]);
	}
	printf("Sum of ( ");
	for ( i=0; i<N; i++ ) {
		if ( even(List[i])==0 )
			printf("%d ", List[i]);
	}
	printf(") = %d\n", OddSum(List, N));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int even( int n ) {
	if(n%2!=0) {
		return 0;
	} else {
		return 1;
	}
}
int OddSum( int List[], int N ) {
	int sum = 0;
	for ( int j=0; j<N; j++ ) {
		if ( even(List[j])==0 ) {
			sum+=List[j];
		}
	}
	return sum;

}

