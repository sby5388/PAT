/*
ϰ��4-7 ���Լ������С������ ��15 �֣�
����Ҫ���������������������Լ������С��������

�����ʽ:
������һ���и�������������M��N����1000����

�����ʽ:
��һ����˳�����M��N�����Լ������С�������������ּ���1�ո�ָ���

��������:
511 292
�������:
73 2044
*/
#include<stdio.h>
int main() {
	int N,M;
	scanf("%d %d",&N,&M);

	int min = N>M?M:N;
	int max = N<M?M:N;
	if(max % min==0) {
		printf("%d %d",min,max);
	} else {
		int result = 1;
		int maxValue  =min;
		for(int i=1; i<maxValue; i++) {
			if(min%i==0 && max%i == 0) {
				result = i;
			}
		}

		printf("%d %d",result,min*max/result);
	}


	return 0;
}


