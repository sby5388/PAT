/*
��ϰ5-2 ��������������� ��10 �֣�
����Ҫ�����������a��b��������нϴ������

�����ӿڶ��壺
int max( int a, int b );
����a��b���û�����Ĳ������������ص��������нϴ������
����������
-5 8
���������
max = 8
*/
#include <stdio.h>

int max( int a, int b );

int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("max = %d\n", max(a, b));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int max( int a, int b ) {
    int max =a;
    if(b>a){
    	max =b;
	}
	return max;
}
