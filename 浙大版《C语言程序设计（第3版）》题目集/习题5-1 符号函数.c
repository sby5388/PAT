/*
ϰ��5-1 ���ź��� ��10 �֣�
����Ҫ��ʵ�ַ��ź���sign(x)��

�����ӿڶ��壺
int sign( int x );
����x���û���������Ͳ��������ź����Ķ���Ϊ����x����0��sign(x) = 1����x����0��sign(x) = 0������sign(x) = -1


����������
10
���������
sign(10) = 1
*/
#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}
/* ��Ĵ��뽫��Ƕ������ */

int sign( int x ){
	int result;
	if(x>0){
		result  = 1;
	}else if(x==0){
		result = 0;
	}else{
		result = -1;
	}
	return result;
}
