/*
ʵ��7-3-1 �ַ������� ��15 �֣�
����һ���ַ������Ը��ַ���������������������ַ�����

�����ʽ��
������һ���и���һ��������80���ַ����ȵġ��Իس������ķǿ��ַ�����

�����ʽ��
��һ��������������ַ�����

����������
Hello World!
���������
!dlroW olleH
*/
#include<stdio.h>
#include<string.h>
#define MAX 81
int main() {
	//�����ַ���%c
	//�ַ�����%s

	char str[MAX];
	//TODO  ����Ҫ��ȡ����һ���У�������ʹ�ÿո�����Ϊ��������ı�־
	//	scanf("%s",&str);
	gets(str);
	int length = strlen(str);
	for(int i=length-1; i>=0; i--) {
		printf("%c",str[i]);
	}
	return 0;
}



