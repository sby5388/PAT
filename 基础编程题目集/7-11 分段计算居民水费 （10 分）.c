/*
7-11 �ֶμ������ˮ�� ��10 �֣�
Ϊ���������Լ��ˮ������ˮ��˾��ȡ����ˮ������ʽ�Ƽ۵İ취��
����Ӧ��ˮ��y��Ԫ��������ˮ��x���֣���أ���x������15��ʱ��
y=4x/3��������y=2.5x - 17.5�����д����ʵ��ˮ�ѵļ��㡣
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
double getPrice(double use);
int main() {
	double use;
	scanf("%lf",&use);
	double price  = getPrice(use);
	printf("%.2lf",price);
	return 0;
}

double getPrice(double use) {
	double result = 0;
	if(use<=0) {
		return result;
	}

	if(use<=15) {
		result = use *4 / 3;
	} else {
		result  =  2.5*use -17.5;
	}
	return result;
}
