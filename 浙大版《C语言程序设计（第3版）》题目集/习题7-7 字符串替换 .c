/*
ϰ��7-7 �ַ����滻 ��15 �֣�
����Ҫ���д���򣬽������ַ����еĴ�дӢ����ĸ�����¶�Ӧ�����滻��

ԭ��ĸ	��Ӧ��ĸ
A	Z
B	Y
C	X
D	W
��	��
X	C
Y	B
Z	A
�����ʽ��
������һ���и���һ��������80���ַ������Իس��������ַ�����

�����ʽ��
�����һ���и����滻��ɺ���ַ�����

����������
Only the 11 CAPItaL LeTtERS are replaced.
���������
Lnly the 11 XZKRtaO OeGtVIH are replaced.
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int count =0;
	while((chars[count]=getchar())!='\n') {
		count++;
	}
	for(int i=0; i<count; i++ ) {
		char c = chars[i];
		if(c>='A'&&c<='Z') {
			c = 'Z'-(c-'A');
			printf("%c",c);
		} else {
			printf("%c",c);
		}
	}
	return 0;
}

