/*
ϰ��6-1 ����ͳ���ַ����� ��15 �֣�
����Ҫ��ʵ��һ��������ͳ�Ƹ����ַ�����Ӣ����ĸ���ո��س��������ַ��������ַ��ĸ�����

�����ӿڶ��壺
void StringCount( char s[] );
���� char s[] ���û�������ַ���������StringCount����һ���ڰ���

letter = Ӣ����ĸ����, blank = �ո��س�����, digit = �����ַ�����, other = �����ַ�����
�ĸ�ʽ�����

���в��Գ���������

����������
aZ &
09 Az
���������
letter = 4, blank = 3, digit = 2, other = 1
*/
#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char s[] ){
	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;
	for(int i=0; i<MAXS; i++) {
		//��ȡһ���ַ����������һ���ַ����� putchar(c);
		char c = s[i];
		if(c==NULL){
			break;
		}
		if((c>='a'&&c<='z' )||(c>='A'&&c<='Z')) {
			letter++;
		} else if(c==' ' ||c=='\n') {
			blank++;
		} else if(c>='0'&& c<='9') {
			digit++;
		} else {
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}

