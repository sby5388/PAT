/*
��ϰ8-2 ���������ĺ���� ��10 �֣�
����Ҫ��ʵ��һ����������������ĺ����ļ򵥺�����

�����ӿڶ��壺
void sum_diff( float op1, float op2, float *psum, float *pdiff );
����op1��op2�����������ʵ����*psum��*pdiff�Ǽ���ó��ĺ���

���в��Գ���������

����������
4 6
���������
The sum is 10.00
The diff is -2.00
*/

#include <stdio.h>

void sum_diff( float op1, float op2, float *psum, float *pdiff );

int main() {
	float a, b, sum, diff;

	scanf("%f %f", &a, &b);
	sum_diff(a, b, &sum, &diff);
	printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void sum_diff( float op1, float op2, float *psum, float *pdiff ) {
	*psum = op1+op2;
	*pdiff = op1-op2;
}
