/*
������A��B��C����С��״��ͬ��������һ������������������ͬ��Ҫ���ҳ������һ������

�����ʽ��
������һ���и���3����������˳���Ӧ��A��B��C��������

�����ʽ��
��һ�������Ψһ���Ǹ���һ������

����������
1 1 2
���������
C
*/
#include<stdio.h>
#define A A
#define B B
#define C C
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b) {
		printf("C");
	} else if(a==c) {
		printf("B");
	} else {
		printf("A");
	}
	return 0;
}

