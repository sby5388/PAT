/*
�����Ƕ���dn Ϊdn = P(n+1)-P(n)������Pi�ǵ�i����������Ȼ��d1=1��
�Ҷ���n>1��dn��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������

�ָ�������������N(<10^5)������㲻����N���������������Եĸ�����

�����ʽ:
������һ�и���������N��

�����ʽ:
��һ�������������N���������������Եĸ�����

��������:
20
�������:
4*/
#include<stdio.h>
#include<math.h>
int prime( int p );
int main() {
	int N;
	scanf("%d",&N);
	int count = 0;
	int j =0;
	for(int i=3; i<N-1;) {
		if(prime(i)) {
			if(prime(i+2)) {
				count++;
			}
		}
		i+=2; 
	}
	printf("%d",count);
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
