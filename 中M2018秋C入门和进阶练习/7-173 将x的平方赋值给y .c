/*
7-173 ��x��ƽ����ֵ��y  ��5 �֣�
����x��ֵΪ3������x��ƽ������ֵ��y���ֱ��ԡ�y = x * x���͡�x * x = y������ʽ���x��y��ֵ��

�����ʽ��
����������

�����ʽ��
�������и�ʽ�������x=3�Ľ����

y = x * x
x * x = y
*/
#include<stdio.h>
int main() {
	int x = 3;
	int y = x*x;

	printf("%d = %d * %d\n",y,x,x);
	printf("%d * %d = %d\n",x,x,y);
	return 0;
}


