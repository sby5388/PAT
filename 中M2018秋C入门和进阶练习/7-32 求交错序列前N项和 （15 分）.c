/*
����Ҫ���д���򣬼��㽻������ 1-2/3+3/5-4/7+5/9-6/11+... ��ǰN��֮�͡�

�����ʽ:
������һ���и���һ��������N��

�����ʽ:
��һ����������ֺ͵�ֵ�����������λС����

��������:
5
�������:
0.917
*/
#include<stdio.h>
double getSum(int N);

int main() {
	int N;
	scanf("%d",&N);
	printf("%.3lf",getSum(N));
	return 0;
}
double getSum(int N) {
	double sum = 0 ;
	int value = 1;
	for(int i=0; i<=N; i++) {
		if(i%2==0) {
			value = -1;
		} else {
			value =1;
		}
		sum+=value*i*1.0/(i*2-1);
	}


	return sum;
}
