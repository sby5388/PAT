/*
ʵ��2-1-3 ����������������ľ��� ��5 �֣�
һ�������100�׵ĸ߿��������¡���д����������ǰ3��������Ĵ�ֱ���롣���������ٶ�Ϊ10��/����η� ��

�����ʽ:
����Ŀû�����롣

�����ʽ:
�������и�ʽ���

height = ��ֱ����ֵ
�������2λС����
*/
#include<stdio.h>
int main() {
	int high  = 100;
	int t = 3;

	double height = 1.0/2 * 10 *t*t;
	if(height>=high) {
		height = high;
	}
	printf("height = %.2lf",height);
	return 0;
}

