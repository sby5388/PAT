#include<stdio.h>
/**
�����������ֱ�Ϊ��c
c1 = x1 + y1i �� c2 = x2 + y2i;
�����ǵĳ˻�Ϊ c1 * c2 = (x1x2 - y1y2 ) + (x1y2 + x2y1)i
����Ҫ��ʵ��һ������������������֮����

�����ӿڶ��壺
double result_real, result_imag;
void complex_prod( double x1, double y1, double x2, double y2 );
�����û�����Ĳ���Ϊ��������x1+y1i��x2+y2i������complex_prodӦ����������ʵ�������
ȫ�ֱ���result_real�С��鲿�����ȫ�ֱ���result_imag�С�
*/
double result_real, result_imag;
void complex_prod( double x1, double y1, double x2, double y2 );

int main(void) {
	double imag1, imag2, real1, real2;

	scanf("%lf %lf", &real1, &imag1);
	scanf("%lf %lf", &real2, &imag2);
	complex_prod(real1, imag1, real2, imag2);
	printf("product of complex is (%f)+(%f)i\n", result_real, result_imag);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void complex_prod( double x1, double y1, double x2, double y2 ) {
	result_real = x1*x2 - y1*y2;
	result_imag = x1*y2 + x2*y1;
}
