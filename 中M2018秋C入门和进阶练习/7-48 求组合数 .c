/*
����Ҫ���д���򣬸��ݹ�ʽ
C(n,m) = n!/(m!(n-m)!); 

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
double fact(int n);
int main() {
	int M,N;
	scanf("%d %d",&M,&N);
	double sum = fact(N)/(fact(M)*fact(N-M));
	printf("result = %.0lf",sum);
	return 0;
}
double fact(int n) {
	double sum = 1;
	while(n>0) {
		sum*=n;
		n--;
	}
	return sum;
}

