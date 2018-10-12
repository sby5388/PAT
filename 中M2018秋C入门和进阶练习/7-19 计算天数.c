/*
7-19 �������� ��15 �֣�
����Ҫ���д�������ĳ��ĳ��ĳ���Ǹ����еĵڼ��졣

�����ʽ:
������һ���а��ո�ʽ��yyyy/mm/dd����������/��/�ա����������ڡ�
ע�⣺������б������Ǹ�������ܱ�4���������ܱ�100�����������ܱ�400�����������2����29�졣

�����ʽ:
��һ����������Ǹ����еĵڼ��졣

��������1:
2009/03/02
�������1:
61
��������2:
2000/03/02
�������2:
62
*/
#include<stdio.h>
int isLoopYear(int year);
int main() {
	int yyyy,mm,dd;
	scanf("%d/%d/%d",&yyyy,&mm,&dd);

	int sum =0;
	int days[12]= {31,28,31,30,31,30,
	               31,31,30,31,30,31
	              };
	if(isLoopYear(yyyy)==1) {
		days[1] = 29;
	}
	for(int i=0; i<mm-1; i++) {
		sum+=days[i];
	}
	sum+=dd;
	printf("%d",sum);

	return 0;
}

int isLoopYear(int year) {
	if(year%4!=0) {
		return 0;
	}
	if(year%100==0) {
		if(year%400==0) {
			return 1;
		}
		return 0;
	}
	return 1;
}







































