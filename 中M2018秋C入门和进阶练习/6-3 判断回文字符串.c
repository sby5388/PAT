/*
����Ҫ���д�������жϸ�����һ���ַ��Ƿ�Ϊ�����ġ���
��ν�����ġ���ָ˳���͵�����һ�����ַ������硰XYZYX���͡�xyzzyx�����ǻ��ġ�

�����ӿڶ��壺
bool palindrome( char *s );
����palindrome�ж������ַ���char *s�Ƿ�Ϊ���ġ�
�����򷵻�true�����򷵻�false��
*/ 
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
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
bool palindrome( char *s ){
	int number =0;

}
