/*
ʵ��7-3-9 �ַ�����ĸ��Сдת�� ��15 �֣�
����Ҫ���д���򣬶�һ���ԡ�#���������ַ���������Сд��ĸȫ��ת���ɴ�д��ĸ��
�Ѵ�д��ĸȫ��ת����Сд��ĸ�������ַ����������

�����ʽ��
����Ϊһ���ԡ�#���������ַ�����������30���ַ�����

�����ʽ��
��һ���������Сдת����Ľ���ַ�����

����������
Hello World! 123#
���������
hELLO wORLD! 123
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int length = 0;
	while((chars[length]=getchar())!='#') {
		length++;
	}

	for(int i=0; i<length; i++) {
		char c = chars[i];
		if(c<='z'&&c>='a') {
			c =c-('a'-'A');
		} else if(c<='Z'&&c>='A') {
			c =c+('a'-'A');
		}
		printf("%c",c);
	}

	return 0;
}

