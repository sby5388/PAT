#include <stdio.h>
#include <math.h>

/**
ϰ��5-3 ʹ�ú������������ľ���
����Ҫ��ʵ��һ���������Ը���ƽ��������������
(x1,y1)��(x2,y2)����������֮��ľ��롣

�����ӿڶ��壺
double dist( double x1, double y1, double x2, double y2 );
�����û�����Ĳ���Ϊƽ���������������(x1, y1)��(x2, y2)������distӦ���������ľ��롣
*/
double dist( double x1, double y1, double x2, double y2 );

int main() {
	double x1, y1, x2, y2;

	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("dist = %.2f\n", dist(x1, y1, x2, y2));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double dist( double x1, double y1, double x2, double y2 ) {

	double x3 = x1-x2;
	double y3 = y1-y2;
	double result  = sqrt(x3*x3+y3*y3);
	return result;
}
