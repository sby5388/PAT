/*
ϰ��8-1 ���ʵ����������С������ ��15 �֣�
����Ҫ��ʵ��һ�����ʵ����������С�����ֵļ򵥺�����

�����ӿڶ��壺
void splitfloat( float x, int *intpart, float *fracpart );
����x�Ǳ���ֵ�ʵ����0��x<10000����*intpart��*fracpart�ֱ��ǽ�ʵ��x��ֳ���������������С�����֡�

���в��Գ���������

����������
2.718
���������
The integer part is 2
The fractional part is 0.718
*/
#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main() {
	float x, fracpart;
	int intpart;

	scanf("%f", &x);
	splitfloat(x, &intpart, &fracpart);
	printf("The integer part is %d\n", intpart);
	printf("The fractional part is %g\n", fracpart);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void splitfloat( float x, int *intpart, float *fracpart ) {
	int zhengShu = 1;
	if(x<0) {
		zhengShu  = -1;
		x*=-1;
	}
	int x1 = (int) x;
	*intpart = x1*zhengShu;
	*fracpart =  (x-x1)*zhengShu;
}
