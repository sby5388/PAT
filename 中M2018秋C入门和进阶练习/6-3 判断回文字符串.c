/*
����Ҫ���д�������жϸ�����һ���ַ��Ƿ�Ϊ�����ġ���
��ν�����ġ���ָ˳���͵�����һ�����ַ������硰XYZYX���͡�xyzzyx�����ǻ��ġ�

�����ӿڶ��壺
bool palindrome( char *s );
����palindrome�ж������ַ���char *s�Ƿ�Ϊ���ġ�
�����򷵻�true�����򷵻�false��
��������1��
thisistrueurtsisiht
�������1��
Yes
thisistrueurtsisiht
��������2��
thisisnottrue
�������2��
No
thisisnottrue
*/
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main() {
	char s[MAXN];

	scanf("%s", s);
	if ( palindrome(s)==true )
		printf("Yes\n");
	else
		printf("No\n");
	printf("%s\n", s);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
bool palindrome( char *s ) {
	int size = strlen(s);
	for(int i=0; i<(size/2); i++) {
		char start = s[i];
		char end = s[size-i];
		printf("%c %c\n",start,end);
		if(start!=end) {
			return false;
		}
	}


	return true;

}
