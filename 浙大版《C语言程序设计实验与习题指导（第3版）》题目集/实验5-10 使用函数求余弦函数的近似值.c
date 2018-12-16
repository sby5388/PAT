/*
ʵ��5-10 ʹ�ú��������Һ����Ľ���ֵ ��15 �֣�
����Ҫ��ʵ��һ�������������й�ʽ��cos(x)�Ľ���ֵ����ȷ�����һ��ľ���ֵС��e��
cos(x) = x^0/0! - x^2/2! + x^4/4! - x^6/6! + ...

�����ӿڶ��壺
double funcos( double e, double x );
�����û�����Ĳ���Ϊ�������e���Ա���x������funcosӦ�����ø�����ʽ��������������������Ҫ���cos(x)�Ľ���ֵ��
�����������˫���ȷ�Χ�ڡ�

���в��Գ���������

����������
0.01 -3.14
���������
cos(-3.14) = -0.999899

*/
#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main() {
	double e, x;

	scanf("%lf %lf", &e, &x);
	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

	return 0;
}
/* ��Ĵ��뽫��Ƕ������ */
double funcos( double e, double x ) {
	double result =0.0;
	int value = 1;
	int number =0;
	double jiecheng = 1;
	double mi =1.0;
	double temp = mi / jiecheng;
	printf("temp      = %.6lf\n",pow(x,0));
	while(abs(temp)> e) {
		result+=temp*value;
		//
		value*=-1;
		mi=mi*x*x;
		jiecheng = jiecheng*(number+1)*(number+2);
		temp = mi/jiecheng;
		number+=2;
		
		printf("result    = %.6lf\n",result);
		printf("mi        = %.6lf\n",mi);
		printf("jiecheng  = %.6lf\n",jiecheng);
		printf("temp      = %.6lf\n",temp);
		printf("value     = %d\n",value);
		printf("number    = %d\n",number);
	}


	return result;
}


