/**
����Ҫ��ͳ�Ƹ�������M��N�����������ĸ�������������͡�

�����ʽ:
������һ���и�������������M��N��1��M��N��500����

�����ʽ:
��һ����˳�����M��N�����������ĸ����Լ����ǵĺͣ����ּ��Կո�ָ���

��������:
10 31
�������:
7 143
*/
#include<stdio.h>
#include<math.h>
int prime( int p );
void PrimeAction( int m, int n );
int main() {
	int m, n, p;
	scanf("%d %d", &m, &n);
	PrimeAction(m, n);
	return 0;
}
int prime( int p ) {
	if(p<2) {
		return 0;
	}
	if(p>3 && 0==(p%2)) {
		return 0;
	}
	int count = 0;
	int min = 1;
	int max = sqrt(p);
	for(int i=min; i<=max; i++) {
		if(0 == p%i) {
			count++;
		}
		if(count>1) {
			return 0;
		}
	}
	return 1;
}
void PrimeAction( int m, int n ) {
	int count = 0;
	int sum=0;
	for(int i=m; i<=n; i++) {
		if(1==prime(i)) {
			sum+=i;
			count++;
		}
	}
	printf("%d %d",count,sum);
}

