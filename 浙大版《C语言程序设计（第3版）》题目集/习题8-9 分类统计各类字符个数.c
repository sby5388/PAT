/*
ϰ��8-9 ����ͳ�Ƹ����ַ����� ��15 �֣�
����Ҫ��ʵ��һ��������ͳ�Ƹ����ַ����еĴ�д��ĸ��Сд��ĸ���ո������Լ������ַ����ж��١�

�����ӿڶ��壺
void StringCount( char *s );
���� char *s ���û�������ַ���������StringCount����һ���ڰ���

��д��ĸ���� Сд��ĸ���� �ո���� ���ָ��� �����ַ�����
�ĸ�ʽ�����

���в��Գ���������

����������
aZ&*?
093 Az
���������
2 2 1 3 4
*/
#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* �ɲ���ʵ�֣���ȥ���� */

int main() {
	char s[MAXS];

	ReadString(s);
	StringCount(s);

	return 0;
}

/* Your function will be put here */
/* �ɲ���ʵ�֣���ȥ���� */
void ReadString( char *s ) {

}
void StringCount( char *s ) {
	int lettera = 0;
	int letterA = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;
	for(int i=0; i<MAXS; i++) {
		//��ȡһ���ַ����������һ���ַ����� putchar(c);
		char c = s[i];
		if(c==NULL) {
			break;
		}
		if(c>='a'&&c<='z' ) {
			lettera++;
		}else if(c>='A'&&c<='Z') {
			letterA++;
		} else if(c==' ') {
			blank++;
		} else if(c>='0'&& c<='9') {
			digit++;
		} else {
			other++;
		}
	}
	printf("%d %d %d %d %d",letterA,lettera,blank,digit,other);
}
