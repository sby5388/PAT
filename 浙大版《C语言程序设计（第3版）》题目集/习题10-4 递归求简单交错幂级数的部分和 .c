/*
ϰ��10-4 �ݹ���򵥽����ݼ����Ĳ��ֺ� ��15 �֣�
����Ҫ��ʵ��һ���������������м򵥽����ݼ����Ĳ��ֺͣ�

f(x,n)=x-x^2+x^3-x^4+...+(-1)^(n-1)*x^n
x
00
�����ӿڶ��壺
double fn( double x, int n );
������Ŀ��֤�����n�������������������������˫���ȷ�Χ�ڡ�
����fnӦ�������������Ĳ��ֺ͡����鳢���õݹ�ʵ�֡�

���в��Գ���������

����������
0.5 12
���������
0.33
*/
#include <stdio.h>

double fn( double x, int n );

int main() {
	double x;
	int n;

	scanf("%lf %d", &x, &n);
	for(int i=0; i<=n; i++) {
		printf("%d %.2f\n",i, fn(x,i));
//		printf("%.2f\n", fn(x,i));
	}

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double fn( double x, int n ) {
	if(n==0) {
		return 1;
	}
	if(n==1) {
		return 1-x;
	}

	return x*(1 - fn(x,n-1));
}

