/*
ʵ��4-1-6 ���������ǰN��� ��15 �֣�
����Ҫ���д���򣬼������� 2/1+3/2+5/3+8/5+... ��ǰN��֮�͡�
ע������дӵ�2����ÿһ��ķ�����ǰһ��������ĸ�ĺͣ���ĸ��ǰһ��ķ��ӡ�

�����ʽ:
������һ���и���һ��������N��

�����ʽ:
��һ����������ֺ͵�ֵ����ȷ��С�������λ����Ŀ��֤������������˫���ȷ�Χ��

��������:
20
�������:
32.66
*/
#include<stdio.h>
void start(long N);
double start2(long N);
int main() {
//	long N;
//	scanf("%ld",&N);
//	start(N);

	long number =26530;
	double result = start2(number);
	while(result>0) {
		printf("%.2lf\n",result);
		number++;
		result = start2(number);
	}
	printf("---%ld",number);

	return 0;
}
void start(long N) {
	double sum = 0;
	int fz = 2;
	int fm = 1;
	int temp;
	while(N>0) {
		sum+=1.0*fz/fm;
		temp = fz;
		fz = fm+fz;
		fm =temp;
		N--;
	}
	printf("%.2lf",sum);
}
double start2(long N) {
	double sum = 0;

	long fz = 2;
	long fm = 1;
	long temp;
	while(N>0) {
		sum+=1.0*fz/fm;
		temp = fz;
		fz = fm+fz;
		fm =temp;
		N--;
	}
//	printf("%.2lf",sum);
	return sum;
}

