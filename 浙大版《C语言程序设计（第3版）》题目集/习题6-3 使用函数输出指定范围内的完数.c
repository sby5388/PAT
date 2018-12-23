/*
ϰ��6-3 ʹ�ú������ָ����Χ�ڵ����� ��20 �֣�
����Ҫ��ʵ��һ�������������Ӻ͵ļ򵥺�����
��������ʵ����һ�������������������m��n��0<m��n��10000��֮�������������
��ν�������Ǹ���ǡ�õ��ڳ������������֮�͡����磺6=1+2+3������1��2��3Ϊ6�����ӡ�

�����ӿڶ��壺
int factorsum( int number );
void PrintPN( int m, int n );
���к���factorsum�뷵��int number�����Ӻͣ�
����PrintPNҪ�������������Χ[m, n]��ÿ�������������ۼ���ʽ�ķֽ�ʽ��
ÿ������ռһ�У���ʽΪ������ = ����1 + ����2 + ... + ����k�����������������Ӿ�������˳�������
�������������û�������������һ�С�No perfect number����

���в��Գ���������

��������1��
1 30
�������1��
1 is a perfect number
1 = 1
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
��������2��
7 25
�������2��
No perfect number
*/
#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main() {
	int i, m, n;

	scanf("%d %d", &m, &n);
	if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
	if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
	PrintPN(m, n);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int factorsum( int number ) {
	
	int sum = 1;
	for(int i=2; i<number; i++) {
		if(0==number%i) {
			sum+=i;
		}
	}
	return sum;
}
void PrintPN( int m, int n ) {
	int count = 0;
	for(int i=m; i<=n; i++) {
		if(i==factorsum(i)) {
			 count = 1;
			printf("%d = 1",i);
			for(int j=2; j<i; j++) {
				if(i%j==0) {
					printf(" + %d",j);
				}
			}
			printf("\n");
		}
	}
	if(count==0) {
		printf("No perfect number");
	}

}


