/*
ϰ��8-3 ����ѭ������ ��20 �֣�
����Ҫ��ʵ��һ�����������ѭ�����Ƶļ򵥺�����һ������a�д���n��>0����������
��ÿ������ѭ��������m����0����λ�ã�����a�е������ɣ�a0 a1 ... an��
�任Ϊ��an-m ... an-1 a0 a1... an-m-1 �������m����ѭ��������ǰ���m��λ�ã���

�����ӿڶ��壺
int ArrayShift( int a[], int n, int m );
����a[]���û���������飻n������Ĵ�С��m�����Ƶ�λ��������ArrayShift�뽫ѭ�����ƺ��������Ȼ����a[]�С�

���в��Գ���������

����������
6 2
1 2 3 4 5 6
���������
5 6 1 2 3 4
*/
#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );
int main() {
	int a[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

	ArrayShift(a, n, m);

	for ( i = 0; i < n; i++ ) {
		if (i != 0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int ArrayShift( int a[], int n, int m ) {
	if(m<0) {
		m+=n;
	}
	while(m>n) {
		m-=n;
	}
	m = n-m;
	int num[m];
	for(int i=0; i<m; i++) {
		num[i] = a[i];
	}

	for(int i = m; i<n; i++) {
		a[i-m]=a[i];
	}
	for(int i=0; i<m; i++) {
		a[n-m+i] = num[i];
	}

}
