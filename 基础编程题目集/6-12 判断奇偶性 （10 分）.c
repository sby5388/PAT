/*
����Ҫ��ʵ���жϸ���������ż�Եĺ�����

�����ӿڶ��壺
int even( int n );
����n���û���������Ͳ�������nΪż��ʱ����������1��nΪ����ʱ����0��ע�⣺0��ż����

���в��Գ���������
��������1��
-6
�������1��
-6 is even.
��������2��
5
�������2��
5 is odd.
*/
#include <stdio.h>

int even( int n );

int main() {
	int n;
	scanf("%d", &n);
	if (even(n))
		printf("%d is even.\n", n);
	else
		printf("%d is odd.\n", n);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int even( int n ) {
	if(n%2==0) {
		return 1;
	}
	return 0;
}

