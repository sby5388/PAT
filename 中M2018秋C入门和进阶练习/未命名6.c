/*
7-41 ����׳˺� ��10 �֣�
���ڸ�����������N����Ҫ����� S=1!+2!+3!+...+N!��
�����ʽ��
������һ���и���һ��������10��������N��
�����ʽ��
��һ�������S��ֵ��
����������
3
���������
9
*/
#include<stdio.h>

int main() {
	int N= 0;
	scanf("%d",&N);
	int sum= 1;
	int count[N];
	count[1]=1;
	for(int i=2; i<=N; i++) {
		count[i]= i*count[i-1];
		sum+=count[i];
	}
	printf("%d",sum);
	return 0;
}


