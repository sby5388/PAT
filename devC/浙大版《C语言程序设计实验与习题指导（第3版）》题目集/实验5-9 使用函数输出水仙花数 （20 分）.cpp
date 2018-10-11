#include <stdio.h>
/*
ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵������������磺
153 = 1*1*1 +5*5*5 +3*3*3
�� ����Ҫ���д����������һ���жϸ��������Ƿ�ˮ�ɻ�����
��һ������С�����˳���ӡ����������(m,n)�����е�ˮ�ɻ�����

�����ӿڶ��壺
int narcissistic( int number );
void PrintN( int m, int n );
����narcissistic�ж�number�Ƿ�Ϊˮ�ɻ��������򷵻�1�����򷵻�0��
����PrintN���ӡ������(m, n)�����е�ˮ�ɻ�����ÿ������ռһ�С���Ŀ��֤100��m��n��10000��
*/

int narcissistic( int number );
void PrintN( int m, int n );

int main() {
	int m, n;

	scanf("%d %d", &m, &n);
	if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

	return 0;
}


/* ��Ĵ��뽫��Ƕ������ */
int getResult(int number,int N) {
	int result = 1;
	while(N>0) {
		result *= number;
		N--;
	}
	return result;
}


int narcissistic( int number ) {
	int number2 = number;
	int count = 0;
	int sum = 0;
	while(number2>0) {
		count++;
		number2 = number2 /10;
	}
	number2 = number;
	while(number2>0) {
		int temp  = number2%10;
		sum += getResult(temp,count);
		number2 = number2 /10;
		if(sum>number) {
			break;
		}
	}
	if(sum==number) {
		return 1;
	}
	return 0;


}
void PrintN( int m, int n ) {
	for(int i=m+1; i<n; i++) {
		if(narcissistic(i)==1) {
			printf("%d ",i);
		}
	}
	printf("\n");
}


