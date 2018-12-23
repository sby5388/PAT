/*
ϰ��6-5 ʹ�ú�����֤��°ͺղ��� ��20 �֣�
����Ҫ��ʵ��һ���ж������ļ򵥺����������øú�����֤��°ͺղ��룺
		�κ�һ����С��6��ż�����ɱ�ʾΪ����������֮�͡�
��������ֻ�ܱ�1��������������������ע�⣺1����������2��������

�����ӿڶ��壺
int prime( int p );
void Goldbach( int n );
���к���prime���û��������pΪ����ʱ����1�����򷵻�0��
����Goldbach���ո�ʽ��n=p+q�����n�������ֽ⣬
����p��q��Ϊ����������Ϊ�����ķֽⲻΨһ������24���Էֽ�Ϊ5+19�������Էֽ�Ϊ7+17����
Ҫ�����������н���p��С�Ľ⡣
*/
#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main() {
	int m, n, i, cnt;

	scanf("%d %d", &m, &n);
	if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
	if ( m < 6 ) m = 6;
	if ( m%2 ) m++;
	cnt = 0;
	for( i=m; i<=n; i+=2 ) {
		Goldbach(i);
		cnt++;
		if ( cnt%5 ) printf(", ");
		else printf("\n");
	}

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
void Goldbach( int n ) {
	int temp;
	for(int i=2;i<n;i++){
		if(prime(i)){
			temp = n-i;
			if(prime(temp)){
				printf("%d=%d+%d",n,i,temp);
				break;
			}
		}
	}
}
