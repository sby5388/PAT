/*
ʵ��5-11 ʹ�ú��������Լ�� ��10 �֣�
����Ҫ��ʵ��һ�����������������Լ���ļ򵥺�����

�����ӿڶ��壺
int gcd( int x, int y );
����x��y������������������gcdӦ�����������������Լ����

���в��Գ���������

����������
32 72
���������
8
*/
#include <stdio.h>
int gcd( int x, int y );
int main() {
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int gcd( int x, int y ) {
	int max = x;
	if(y>x) {
		max = y;
	}
	while(1) {
		if(x%max==0&&y%max==0) {
			break;
		}
		max--;
	}
	return max;
}
