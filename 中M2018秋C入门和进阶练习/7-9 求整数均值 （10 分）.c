/**
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
int main() {
	int count  =4;
	int sum = 0;
	int temp;
	while(count>0) {
		scanf("%d",&temp);
		sum+=temp;
		count--;
	}
	double avg = sum*1.0/4; 
	printf("Sum = %d; Average = %.1lf",sum,avg);
	return 0;
}
