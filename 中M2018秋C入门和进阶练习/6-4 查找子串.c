/*
����Ҫ��ʵ��һ���ַ������ҵļ򵥺�����

�����ӿڶ��壺
char *search( char *s, char *t );
����search���ַ���s�в����Ӵ�t�������Ӵ�t��s�е��׵�ַ����δ�ҵ����򷵻�NULL��
��������1��
The C Programming Language
ram
�������1��
10
��������2��
The C Programming Language
bored
�������2��
-1
*/
#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* �����ṩ��ϸ�ڲ��� */

int main() {
	char s[MAXS], t[MAXS], *pos;

	ReadString(s);
	ReadString(t);
	pos = search(s, t);
	if ( pos != NULL )
		printf("%d\n", pos - s);
	else
		printf("-1\n");

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
char *search(char *s, char *t) {
	//todo 20181015
	int lengths = strlen(s);
	int lengtht = strlen(t);
	printf("%d %d\n",lengths,lengtht);
	
	
	
	return NULL;
	
}
