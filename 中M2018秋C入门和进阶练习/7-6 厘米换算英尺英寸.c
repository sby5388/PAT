/*
�����֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ����ô��Ӧ������(foot+inch/12)��0.3048��
���ڣ�����û������������������ô��ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ���Ƕ����أ�������1Ӣ�ߵ���12Ӣ�硣

�����ʽ��
������һ���и���1������������λ�����ס�

�����ʽ��
��һ������������������ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ�������ֵ���м��ÿո�ֿ���

����������
170
���������
5 6
*/
#include<stdio.h>
void start(double m);
int main() {
	int cm;
	scanf("%d",&cm);
	double m = cm*1.0/100;
	start(m);
	return 0;
}
void start(double m) {
	double inchs = m/0.3048;
	int foot = (int)inchs/12;
	int inch = ((int)inchs % 12);
	printf("%d %d",foot,inch);
}

