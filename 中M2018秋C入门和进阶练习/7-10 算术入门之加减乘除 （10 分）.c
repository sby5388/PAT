/**
�����������������������Ҫ�������Ͳ���̡�

�����ʽ:
��һ������������������100�ķǸ�����a��b���м���һ���ո������ұ�֤b��Ϊ0��

�����ʽ:
�����У���ʽ�ǣ�

[a] + [b] = [a+b]
[a] - [b] = [a-b]
[a] * [b] = [a*b]
[a] / [b] = [a/b]
���У����з����ŵ����ݣ���[a]��[b]��[a+b]�ȣ���ʾ��Ӧ��������������ֵ�������ʱҪ��ʵ�ʵ�ֵ���档

���ң����a�ܹ���b��������ôa/bӦ���Ϊ������ʽ������a/b���Ϊ����λС���ĸ�ʽ��

��ʾ��ע����ʽ�еĿո�

��������1:
6 3
�������1:
6 + 3 = 9
6 - 3 = 3
6 * 3 = 18
6 / 3 = 2
��������2:
8 6
�������2:
8 + 6 = 14
8 - 6 = 2
8 * 6 = 48
8 / 6 = 1.33
*/
#include<stdio.h>
void first(int a,int b);
void second(int a,int b);
int main() {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	first(a,b);
	return 0;
}
void first(int a,int b) {
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	second(a,b);
}
void second(int a,int b) {
	int c = a/b;
	if(a==b*c) {
		printf("%d / %d = %d\n",a,b,c);
	} else {
		double d =a*1.0/b;
		printf("%d / %d = %.2lf\n",a,b,d);
	}
}

