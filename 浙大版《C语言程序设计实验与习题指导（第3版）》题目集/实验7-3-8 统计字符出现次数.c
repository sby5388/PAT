/*
ʵ��7-3-8 ͳ���ַ����ִ��� ��20 �֣�
����Ҫ���д����ͳ�Ʋ����ĳ�����ַ��ڸ����ַ����г��ֵĴ�����

�����ʽ��
�����һ�и���һ���Իس��������ַ���������80���ַ������ڶ�������һ���ַ���

�����ʽ��
��һ������������ַ��ڸ����ַ����г��ֵĴ�����

����������
programming is More fun!
m
���������
2
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int length = 0;
	while((chars[length]=getchar())!='\n') {
		length++;
	}
	char c;
	c = getchar();
	int count  = 0;
	for(int i=0; i<length; i++) {
		if(chars[i]==c) {
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

