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
	char t[MAXN] =  "happy new year";
	char  s[MAXN];
	int m;

	//scanf("%d\n", &m);
	m = 7;
	//ReadString(t);
//	*t  = "happy new year";
	strmcpy( t, m, s );
	printf("%s\n", s);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void strmcpy( char *t, int m, char *s ) {
	int length = 0;
	while(t[length]!='\0') {
//		printf("%c",t[length]);
		length++;
	}
//	printf("\n");
//	printf("%d\n",length);
	if(m<length) {
//	printf("\n");
		for(int i =0; i<length-m+1; i++) {
			s[i] = t[m+i-1];
			printf("%c",t[m+i-1]);
		}
		printf("%c",t[length-m+1]);
		printf("\n");
		s[length - m+1] = '\0';
	}
}
