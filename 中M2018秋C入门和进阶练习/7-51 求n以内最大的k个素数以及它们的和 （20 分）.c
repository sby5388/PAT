/*
����Ҫ����㲢���������n������k�������Լ����ǵĺ͡�

�����ʽ:
������һ���и���n(10��n��10000)��k(1��k��10)��ֵ��

�����ʽ:
��һ���а����и�ʽ���:

����1+����2+��+����k=�ܺ�ֵ
�����������ݼ�˳���������n���ڲ���k����������ʵ�ʸ��������

��������1:
1000 10
�������1:
997+991+983+977+971+967+953+947+941+937=9664
��������2:
12 6
�������2:
11+7+5+3+2=28
*/

#include<stdio.h>
#include<math.h>
int prime(int p);
void showPrime(int n,int k);
int main() {
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	showPrime(n,k);
	return 0;
}
void showPrime(int n,int K) {

	int k = K;
	int sum = 0;
	int isFirst = 1;
	//init
	int result[k];
	for(int i=0; i<k; i++) {
		result[i] = 0;
	}

	while(n>0) {
		if(prime(n)) {
			result[k]=n;
			k--;
		}
		n--;
		if(n==1 || k<0) {
			break;
		}
	}


	for(int i=K; i>0; i--) {
		int value = result[i];
		if(value!=0) {
			if(isFirst) {
				printf("%d",value);
				isFirst=0;
			} else {
				printf("+%d",value);
			}
			sum+=value;
		}
	}
	printf("=%d",sum);

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


