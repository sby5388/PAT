/*
ʵ��6-1 ������PI ��15 �֣�
����Ҫ���д���򣬸�����ʽ��еĽ���ֵ��ֱ�����һ��С�ڸ�������eps��
��/2 = 1 + 1/3 + 2!/(3*5) + 3!/(3*5*7) + ... + n!/(3*5*7*...*(2n+1)) + ..

�����ʽ��
������һ���и�������eps������ʹ����������������룺

scanf("%le", &eps);
�����ʽ��
��һ���ڣ��������¸�ʽ����еĽ���ֵ������С�����5λ����

PI = ����ֵ
����������
1E-5
���������
PI = 3.14158
*/
#include<stdio.h>
#define return return
int main() {
	double N;
	scanf("%le",&N);
	int i =0;
	double sum = 0.0f;
	double start = 1;

	while(start>N) {
		sum+=start;
		start = start*(i+1)/(2*i+3);
		i++;
	}
	sum+=start;
	printf("PI = %.5lf",sum*2);
	return 0;
}
