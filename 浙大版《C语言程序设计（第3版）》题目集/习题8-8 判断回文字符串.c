/*
ϰ��8-8 �жϻ����ַ��� ��20 �֣�
����Ҫ���д�������жϸ�����һ���ַ��Ƿ�Ϊ�����ġ�����ν�����ġ���ָ˳���͵�����һ�����ַ������硰XYZYX���͡�xyzzyx�����ǻ��ġ�

�����ӿڶ��壺
bool palindrome( char *s );
����palindrome�ж������ַ���char *s�Ƿ�Ϊ���ġ������򷵻�true�����򷵻�false��

���в��Գ���������

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
//	char s[MAXN] ="thisisnottrue";
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
bool palindrome( char *t ) {
	int length = 0;
	while(t[length]!='\0') {
		length++;
	}
	bool result = true;
	for(int i= 0; i<length/2; i++) {
		if(t[i]!=t[length-i-1]){
			result = false;
			break;
		}
	}
	return result;
}
