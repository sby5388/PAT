#include <stdio.h>
#include <math.h>
/*
����Ҫ��ʵ��һ���ж������ļ򵥺������Լ����øú���������������������͵ĺ�����

��������ֻ�ܱ�1��������������������ע�⣺1����������2��������

�����ӿڶ��壺
int prime( int p );
int PrimeSum( int m, int n );
���к���prime���û��������pΪ����ʱ����1�����򷵻�0������PrimeSum��������[m, n]�����������ĺ͡���Ŀ��֤�û�����Ĳ���m��n��

*/
int prime( int p );
int PrimeSum( int m, int n );

int main() {
	int m, n, p;

	scanf("%d %d", &m, &n);
	printf("Sum of ( ");
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
	if(p>3 && 0==(p%2)) {
		return 0;
	}
	int count = 0;
	int min = 1;
	int max = sqrt(p);
	for(int i=min; i<=max; i++) {
		if(0 == p%i) {
			count++;
		}
		if(count>1) {
			return 0;
		}
	}
	return 1;
}
int PrimeSum( int m, int n ) {
	int sum=0;
	for(int i=m; i<=n; i++) {
		if(1==prime(i)) {
			sum+=i;
		}
	}
	return sum;
}

