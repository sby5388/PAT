/*
ϰ��11-2 �������� ��15 �֣�
����Ҫ��ʵ�ֺ��������Ը����±���ҵ����ڣ����ض�Ӧ����š�

���	����
0	Sunday
1	Monday
2	Tuesday
3	Wednesday
4	Thursday
5	Friday
6	Saturday
�����ӿڶ��壺
int getindex( char *s );
����getindexӦ�����ַ���s��š��������Ĳ���s����һ���������ڵ��ַ������򷵻�-1��

���в��Գ���������

��������1��
Tuesday
�������1��
2
��������2��
today
�������2��
wrong input!

*/
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main() {
	int n;
	char s[MAXS];

	scanf("%s", s);
	n = getindex(s);
	if ( n==-1 ) printf("wrong input!\n");
	else printf("%d\n", n);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int getindex( char *s ) {
	
	int index = -1;
	const int length = 7;
	char week[][MAXS] = {"Sunday","Monday","Tuesday","Wednesday",
	"Thursday","Friday","Saturday"
	};
	for(int i=0;i<length;i++){
		if(stricmp(s,week[i])==0){
			index = i;
			break;
		}
	}
	return index;

}
