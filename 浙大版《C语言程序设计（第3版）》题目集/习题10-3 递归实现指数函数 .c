/*
ϰ��10-3 �ݹ�ʵ��ָ������ ��15 �֣�
����Ҫ��ʵ��һ������x^n(n��1���ĺ�����

�����ӿڶ��壺
double calc_pow( double x, int n );
����calc_powӦ����x��n���ݵ�ֵ�������õݹ�ʵ�֡���Ŀ��֤�����˫���ȷ�Χ�ڡ�

���в��Գ���������

����������
2 3
���������
8
*/
#include <stdio.h>

double calc_pow( double x, int n );

int main() {
	double x;
	int n;

	scanf("%lf %d", &x, &n);
	printf("%.0f\n", calc_pow(x, n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double calc_pow( double x, int n ) {
	if(n==0) {
		return 1;
	}
	return calc_pow(x,n-1)*x;
}
