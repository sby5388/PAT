/*
ʵ��7-2-4 �������� ��15 �֣�
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
��л����������ҵѧԺԬ����ʦ��������
*/
#include<stdio.h>
int isLoopYear(int year);
int day_of_year(int year,int month,int day);
int main() {
	int yyyy,mm,dd;
	scanf("%d/%d/%d",&yyyy,&mm,&dd);

	printf("%d",day_of_year(yyyy,mm,dd));

	return 0;
}
int day_of_year(int year,int month,int day) {
	int sum =0;
	int days[12]= {31,28,31,30,31,30,
	               31,31,30,31,30,31
	              };
	if(isLoopYear(year)==1) {
		days[1] = 29;
	}
	for(int i=0; i<month-1; i++) {
		sum+=days[i];
	}
	sum+=day;
	return sum;

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


