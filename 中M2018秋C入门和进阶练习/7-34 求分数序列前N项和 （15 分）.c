/*
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
void start(int N);
int main() {
	int N;
	scanf("%d",&N);
	start(N);
	return 0;
}
void start(int N) {
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


































