/*
7-75 ��׳�����ǰN��ͣ�15 �֣�
����Ҫ���д���򣬼������� 1!+2!+3!+... ��ǰN��֮�͡�

�����ʽ:
������һ���и���һ��������12��������N��

�����ʽ:
��һ����������������

��������:
5
�������:
153
*/
#include<stdio.h>
int factorial(int a);
int main() {
	int N;
	scanf("%d",&N);
	int start = 1;
	int sum = 0;
	for(int i=1; i<=N; i++) {
		start*=i;
		sum+=start;
	}
	printf("%d",sum);

	return 0;
}
int factorial(int a) {
	return a;
}


