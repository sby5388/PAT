/*
ʵ��2-4-6 ����֮�� ��15 �֣�
����Ҫ���д���򣬼���sum=2^1+2^2+...+2^n �����Ե���pow�������ݡ�

�����ʽ:
������һ���и���������n����10����

�����ʽ:
���ո�ʽ��result = �������������

��������:
5
�������:
result = 62
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);

	int sum  = 0;
	int temp = 1;
	for(int i=1; i<=N; i++) {
		temp*=2;
		sum+=temp; 
	}
	printf("result = %d",sum);
	return 0;
}

