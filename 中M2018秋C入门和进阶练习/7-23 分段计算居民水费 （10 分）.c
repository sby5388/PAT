/*

Ϊ���������Լ��ˮ������ˮ��˾��ȡ����ˮ������ʽ�Ƽ۵İ취��
����Ӧ��ˮ��y��Ԫ��������ˮ��x���֣���أ�
��x������15��ʱ��y=4x/3��
������y=2.5x?17.5�����д����ʵ��ˮ�ѵļ��㡣

�����ʽ��
������һ���и����Ǹ�ʵ��x��

�����ʽ��
��һ�����Ӧ����ˮ�ѣ���ȷ��С�����2λ��

��������1��
12
�������1��
16.00
��������2��
16
�������2��
22.50
*/
#include<stdio.h>
double getPrice(double number);
int main() {
	double y;
	scanf("%lf",&y);
	printf("%.2lf",getPrice(y));
	return 0;
}

double getPrice(double number) {
	if(number<0) {
		return 0.0;
	}
	if(number<=15) {
		return 4.0*number/3;
	}
	return 2.5*number-17.5;
}

