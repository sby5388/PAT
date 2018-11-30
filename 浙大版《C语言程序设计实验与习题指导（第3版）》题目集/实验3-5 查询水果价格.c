/*
ʵ��3-5 ��ѯˮ���۸� ��15 �֣�
��������ˮ�����ֱ���ƻ����apple�����棨pear�������ӣ�orange�������ѣ�grape�������۷ֱ��ӦΪ3.00Ԫ/���2.50Ԫ/���4.10Ԫ/���10.20Ԫ/���

��������Ļ����ʾ���²˵���

[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
�û�����������1~4��ѯ��Ӧˮ���ĵ��ۡ���������ѯ��������5��ʱ������Ӧ�Զ��˳���ѯ������5�ζ��û�����0���˳�������������ţ���ʾ�۸�Ϊ0��

�����ʽ:
������һ���и����û�������������ɸ���š�

�����ʽ:
��������Ļ����ʾ�˵���Ȼ���Ӧ�û���ÿ�����룬��һ���а���ʽ��price = �۸������ѯ��������м۸�����λС�������û�������ѯ��������5�Ρ�����������0ʱ�����������

��������1:
3 -1 0 2
�������1:
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
price = 4.10
price = 0.00
��������2:
1 2 3 3 4 4 5 6 7 8
�������2:
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
price = 3.00
price = 2.50
price = 4.10
price = 4.10
price = 10.20
*/
#include<stdio.h>
#define max 5
void query(int type);

const double prices[] = {0.00,3.00,2.50,4.10,10.20};

int main() {
	int N[max];
	//todo ������Ȼͨ�������߼��ϵͳ�����Ǵ��� ��������1֮�У���������������ʱ  ͣס���������� 
	for(int i=0; i<max; i++) {
		scanf("%d",&N[i]);
	}
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");

	for(int i=0; i<max; i++) {
		if(0==N[i]){
			break;
		}
		query(N[i]);
	}

	return 0;
}
void query(int type) {
	double result = 0.0;
	if(type<sizeof(prices)/sizeof(prices[0])) {
		result  = prices[type];
	}
	printf("price = %.2lf\n",result);
}

