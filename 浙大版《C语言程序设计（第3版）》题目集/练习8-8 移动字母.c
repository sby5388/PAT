/*
��ϰ8-8 �ƶ���ĸ ��10 �֣�
����Ҫ���д�������������ַ�����ǰ3���ַ��Ƶ����

�����ӿڶ��壺
void Shift( char s[] );
����char s[]���û�������ַ�������Ŀ��֤�䳤�Ȳ�С��3������Shift�뽫����Ҫ��任����ַ�����Ȼ����s[]�

���в��Գ���������

����������
abcdef
���������
defabc
*/
#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* ʵ��ϸ���ڴ˲��� */

int main() {
	char s[MAXS];

	GetString(s);
//	char s[] = "abcdef";
	Shift(s);
	printf("%s\n", s);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void Shift( char s[] ) {
	int length = strlen(s);
	int n = 3;
	char temp[n];
	for(int i=0; i<n; i++) {
		temp[i] = s[i];
	}
	for(int i = n; i<length; i++) {
		s[i-n]=s[i];
	}
	for(int i = 0; i<n; i++) {
		s[length - n + i] = temp[i];
	}


}
