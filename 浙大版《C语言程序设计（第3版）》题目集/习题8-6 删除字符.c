/*
ϰ��8-6 ɾ���ַ� ��20 �֣�
����Ҫ��ʵ��һ��ɾ���ַ����е�ָ���ַ��ļ򵥺�����

�����ӿڶ��壺
void delchar( char *str, char c );
����char *str�Ǵ�����ַ�����c�Ǵ�ɾ�����ַ�������delchar�Ĺ����ǽ��ַ���str�г��ֵ�����c�ַ�ɾ����
����������
a
happy new year
���������
hppy new yer
*/
#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main() {
	char str[MAXN] = "aahappy new yearaaa";
	char c ='a';

//	scanf("%c\n", &c);
//	ReadString(str);
	delchar(str, c);
	printf("%s\n", str);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */


/* �ɲ���ʵ�֣���ȥ���� */
void ReadString( char s[] ) {
}

void delchar( char *t, char c ) {
	int length = 0;
	while(t[length]!='\0') {
		length++;
	}
	int count  = length;
	for(int i = count-1; i>-1; i--) {
		char temp = t[i];
		//printf("%c\n",temp);
		if(temp=='\0') {
			break;
		}
		if(c==temp) {
			//printf("i = %d,count = %d\n",i,count);
			for(int k = i; k<count+1; k++) {
				t[k]=t[k+1];
			}
		}
	}

}
