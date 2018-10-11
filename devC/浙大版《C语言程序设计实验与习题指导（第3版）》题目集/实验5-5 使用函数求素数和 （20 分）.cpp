#include <stdio.h>
#include <math.h>

/**
����Ҫ��ʵ��һ���ж������ļ򵥺������Լ����øú���������������������͵ĺ�����

��������ֻ�ܱ�1��������������������ע�⣺1����������2��������

�����ӿڶ��壺
int prime( int p );
int PrimeSum( int m, int n );
���к���prime���û��������pΪ����ʱ����1�����򷵻�0��
����PrimeSum��������[m, n]�����������ĺ͡���Ŀ��֤�û�����Ĳ���m��n��

*/

int prime( int p );
int PrimeSum( int m, int n );

int main() {
	int m, n, p;

	scanf("%d %d", &m, &n);

	printf("Sum of ( ");
//	printf("\n");
	
	for( p=m; p<=n; p++ ) {
		if( prime(p) != 0 ) {
			printf("%d ", p);
		}
	}
	printf(") = %d\n", PrimeSum(m, n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int prime( int p ) {
	if(p<2) {
		return 0;
	}

	int  max = (int)sqrt(p);
	int count =0;
	for(int i=2; i<=max; i++ ) {
		if(p%i==0) {
			count++;
		}
		if(count>0) {
			return 0;
		}
	}

	return 1;

}
int PrimeSum( int m, int n ) {
	int sum = 0;
	for(int i=m; i<=n; i++) {
		if(prime(i)==1) {
			sum+=i;
		}
	}

	return sum;
}


