/*
ϰ��6-4 ʹ�ú������ָ����Χ�ڵ�Fibonacci�� ��20 �֣�
����Ҫ��ʵ��һ������Fibonacci���ļ򵥺�����
��������ʵ����һ�������������������m��n��0<m��n��10000��֮�������Fibonacci����
��νFibonacci���о���������һ��������ǰ����ĺͣ��ʼ���������Ϊ1�������С�

�����ӿڶ��壺
int fib( int n );
void PrintFN( int m, int n );
���к���fib�뷵�ص�n��Fibonacci����
����PrintFNҪ��һ�������������Χ[m, n]�ڵ�����Fibonacci����
�������ּ���һ���ո���ĩ�����ж���ո�
�������������û��Fibonacci���������һ�С�No Fibonacci number����

���в��Գ���������

��������1��
20 100 7
�������1��
fib(7) = 13
21 34 55 89
��������2��
2000 2500 8
�������2��
fib(8) = 21
No Fibonacci number
*/
#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main() {
	int m, n, t;

	scanf("%d %d %d", &m, &n, &t);
	printf("fib(%d) = %d\n", t, fib(t));
	PrintFN(m, n);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int fib( int n ) {
	if(n==1||n==2) {
		return 1;
	} else {
		return fib(n-1)+fib(n-2);
	}
}
void PrintFN( int m, int n ) {

	int count = 0;
	int fa = 1;
	int fb = 1;
	while(1) {
		if(fb>=m&&fb<=n) {
			if(count==0) {
				printf("%d",fb);
			} else {
				printf(" %d",fb);
			}
			count++;
		}
	
		int temp = fb;
		fb+=fa;
		fa = temp;
			if(fb>n) {
			break;
		}
	}
	if(count==0){
		printf("No Fibonacci number");
	}
}

