/*
ʵ��2-2-5 ��������ֵ ��10 �֣�
����Ҫ���д���򣬼���4�������ĺ���ƽ��ֵ����Ŀ��֤����������������ͷ�Χ�ڡ�

�����ʽ:
������һ���и���4������������Կո�ָ���

�����ʽ:
��һ���а��ո�ʽ��Sum = ��; Average = ƽ��ֵ��˳���������ƽ��ֵ������ƽ��ֵ��ȷ��С�����һλ��

��������:
1 2 3 4
�������:
Sum = 10; Average = 2.5
*/
#include<stdio.h>
#define MAX 4
int main() {
	int sum = 0;
	int temp = 0;
	for(int i=0; i<MAX; i++) {
		scanf("%d",&temp);
		sum+=temp;
	}

	printf("Sum = %d; Average = %.1lf",sum,sum*1.0/MAX);
	return 0;
}

