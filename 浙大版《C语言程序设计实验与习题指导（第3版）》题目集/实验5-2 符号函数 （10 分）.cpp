#include <stdio.h>

/*
����Ҫ��ʵ�ַ��ź���sign(x)��
�����ӿڶ��壺
int sign( int x );
����x���û���������Ͳ��������ź����Ķ���Ϊ��
	��x����0��sign(x) = 1��
	��x����0��sign(x) = 0��
	����sign(x) = -1��
*/
int sign( int x );

int main() {
	int x;

	scanf("%d", &x);
	printf("sign(%d) = %d\n", x, sign(x));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int sign( int x ) {
	if(0==x) return 0;
	if(0<=x) return 1;
	if(0>=x) return -1;
}

