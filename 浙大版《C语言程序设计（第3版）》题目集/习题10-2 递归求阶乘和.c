/*
ϰ��10-2 �ݹ���׳˺� ��15 �֣�
����Ҫ��ʵ��һ������Ǹ������׳˵ļ򵥺����������øú����� 1!+2!+3!+...+n! ��ֵ��

�����ӿڶ��壺
double fact( int n );
double factsum( int n );
����factӦ����n�Ľ׳ˣ������õݹ�ʵ�֡�����factsumӦ���� 1!+2!+...+n! ��ֵ��
��Ŀ��֤���������˫���ȷ�Χ�ڡ�

���в��Գ���������

��������1��
10
�������1��
fact(10) = 3628800
sum = 4037913
��������2��
0
�������2��
fact(0) = 1
sum = 0
*/
#include <stdio.h>

double fact( int n );
double factsum( int n );

int main() {
	int n;
	scanf("%d",&n);
	printf("fact(%d) = %.0f\n", n, fact(n));
	printf("sum = %.0f\n", factsum(n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double fact( int n ) {
	if(n==1||n==0){
		return 1;
	}
	return fact(n-1)*n;
}
double factsum( int n ) {
	if(n==0||n==1){
		return n;
	}
	return factsum(n-1)+fact(n);
}

