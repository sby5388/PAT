/*
��ϰ2-18 ������� ��15 �֣�
����Ҫ���д���򣬸��ݹ�ʽ
C(m,n) = n!/(m!*(n-m)!)
 �����n����ͬԪ����ȡ��m��Ԫ�أ�m��n�����������

���鶨��͵��ú���fact(n)����n!������n��������int������������double��

�����ʽ:
������һ���и�������������m��n��m��n�����Կո�ָ���

�����ʽ:
���ո�ʽ��result = ��������������������Ŀ��֤�����double���ͷ�Χ�ڡ�

��������:
2 7
�������:
result = 21
*/
#include<stdio.h>
double fact(int N);
int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	double result = fact(n)/(fact(m)*fact(n-m));
	printf("result = %.0lf",result);

	return 0;
}

double fact(int n) {
	double result = 1;
	while(n>1) {
		result*=n;
		n--;
	}
	return result;
}

