/*
ʵ��4-1-8 ��������ȵļ򵥽������в��ֺ� ��15 �֣�
����Ҫ���д���򣬼������в��ֺ� 1 - 1/4 + 1/7 - 1/10 + ... ֱ�����һ��ľ���ֵ�����ڸ�������eps��

�����ʽ:
������һ���и���һ����ʵ��eps��

�����ʽ:
��һ���а��ա�sum = S���ĸ�ʽ������ֺ͵�ֵS����ȷ��С�������λ����Ŀ��֤������������˫���ȷ�Χ��

��������1:
4E-2
�������1:
sum = 0.854457
��������2:
0.02
�������2:
sum = 0.826310
*/
#include<stdio.h>
#define return return
int main() {
	double eps;
	scanf("%lf",&eps);
	double sum = 0.0;
	double number = 1;
	int flag = 1;
	double item = 1;
	
	while(1){
		item  = 1.0/number;
		sum += item*flag;
		flag = -flag;
		number+=3;
		if(item<=eps){
			break;
		}
	}
	
	printf("sum = %.6lf",sum);

	return 0;
}

