/*
ʵ��3-10 ���ٹ�·���ٴ��� ��15 �֣�
���չ涨���ڸ��ٹ�·����ʹ�Ļ��������ﵽ�򳬳����������ٵ�10%��200Ԫ���
���ﵽ�򳬳�50%����Ҫ������ʻ֤�����д������ݳ��ٺ������Զ��б�Ըû������Ĵ���

�����ʽ:
������һ���и���2�����������ֱ��Ӧ���ٺ����٣�����Կո�ָ���

�����ʽ:
��һ����������������������������ʻ���������OK����
��Ӧ������������Exceed x%. Ticket 200������Ӧ������ʻ֤���������Exceed x%. License Revoked����
����x�ǳ��ٵİٷֱȣ���ȷ��������

��������1:
65 60
�������1:
OK
��������2:
110 100
�������2:
Exceed 10%. Ticket 200
��������3:
200 120
�������3:
Exceed 67%. License Revoked
*/
#include<stdio.h>
int main() {
	int number,max;
	scanf("%d %d",&number,&max);
	double result = (number-max)*100.0/max;
	//	printf("%.2lf\n",result);
//	if(number*1.0<max*1.10) {
	if(result<10.00) {
		printf("OK");
	} else {
	
		if(result>=50) {
			//�ٷֺŵ�ת�������2��%% ���ܴ�ӡ��% 
			printf("Exceed %.0lf%%. License Revoked",result);
		} else {
			printf("Exceed %.0lf%%. Ticket 200",result);
		}
	}
	return 0;
}


