/*
ϰ��4-2 ���ݼ���չ���Ĳ��ֺ� ��20 �֣�
��֪����e^x
����չ��Ϊ�ݼ���1 + x + x^2/2! + x^3/3! + ... +x^k/k! + ...
���ָ���һ��ʵ��x��Ҫ�����ô��ݼ������ֺ���e^x�Ľ���ֵ��
���һֱ���������һ��ľ���ֵС��0.00001��

�����ʽ:
������һ���и���һ��ʵ��x��[0,5]��

�����ʽ:
��һ������������������ݼ������ֺͣ�����С�������λ��

��������:
1.2
�������:
3.3201
*/
#include<stdio.h>
#include<math.h>
#define return return
//�������г�ʱ
//TODO ��Ȼ˵������ֵ���������ʹ�õ�����ֵ�����ͻ����
int main() {
	double N;
	scanf("%lf",&N);
	double sum = 1;
	double temp = 0.0;
	double fz = 1;
	double fm = 1;
	int count = 0;
	double min = 0.00001;
	while(1) {
		count++;
		fz *= N;
		fm *= count;
		temp = fz/fm;
		sum += temp;

		if(temp<min) {
			break;
		}
	}
	printf("%.4lf",sum);

	return 0;
}

