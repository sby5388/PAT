/*
ϰ��8-5 ʹ�ú���ʵ���ַ������ָ��� ��20 �֣�
����Ҫ���д�������������ַ���t�дӵ�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���s�С�

�����ӿڶ��壺
void strmcpy( char *t, int m, char *s );
����strmcpy�������ַ���char *t�дӵ�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���char *s�С�
��m���������ַ����ĳ��ȣ������ַ���ӦΪ�մ���

���в��Գ���������

����������
7
happy new year
���������
new year
*/
#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main() {
	{
		//ԭʼ������

		char t[MAXN], s[MAXN];
		int m;

		scanf("%d\n", &m);
		ReadString(t);
		strmcpy( t, m, s );
		printf("%s\n", s);

		return 0;
	}
	{
		//����ʹ��
		char t[MAXN] =  "a";
//	char t[MAXN] =  "abc";
		char  s[MAXN];
		int m;

		//printf("sizeof(t) = %d\n",sizeof(t));

		//scanf("%d\n", &m);
		m = 1;
		//ReadString(t);
//	*t  = "happy new year";
		strmcpy( t, m, s );
		printf("%s\n", s);

		return 0;
	}
}

/* ��Ĵ��뽫��Ƕ������ */
void strmcpy( char *t, int m, char *s ) {
	int length = 0;
	while(t[length]!='\0') {
		length++;
	}
	if(m<MAXN && m<=length) {
		for(int i =0; i<length-m+1; i++) {
			s[i] = t[m+i-1];
		}
		s[length - m+1] = '\0';
	} else {
		s[0]='\0';
	}
}
