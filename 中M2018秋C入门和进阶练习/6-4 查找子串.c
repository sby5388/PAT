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
//	char s[MAXS], t[MAXS], *pos;

//	ReadString(s);
//	ReadString(t);
	char	s[] = "The C Programming Language";
	char	t[] = "bored";

	printf("%s\n",s);
	printf("%s\n",t);
	char *pos = search(s, t);
	if ( pos != NULL ) {
		printf("%d\n", pos - s);
	} else {
		printf("-1\n");
	}


	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
char *search(char *s, char *t) {
	char *result = NULL;
	//todo 20181015
	int ls = 0;
	while(s[ls]!='\0') {
		ls++;
	}

	int lt = 0;
	while(t[lt]!='\0') {
		lt++;
	}
//		printf("%d %d\n",ls,lt);

	for(int i=0; i<ls; i++) {
		int equals = 1;
		for(int j=0; j<lt; j++) {
			if(s[i+j]!=t[j]) {
				equals = 0;
				break;
			}
		}
		if(equals==1) {
			result =  &s[i];
			break;
		}
	}
	return result;

}
void ReadString(char *s) {
	gets(s);
}
