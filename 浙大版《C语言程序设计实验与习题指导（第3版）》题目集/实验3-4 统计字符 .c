/*
ʵ��3-4 ͳ���ַ� ��15 �֣�
����Ҫ���д��������10���ַ���ͳ������Ӣ����ĸ���ո��س��������ַ��������ַ��ĸ�����

�����ʽ:
����Ϊ10���ַ������һ���س���ʾ����������������ڡ�

�����ʽ:
��һ���ڰ���

letter = Ӣ����ĸ����, blank = �ո��س�����, digit = �����ַ�����, other = �����ַ�����
�ĸ�ʽ�����

��������:
aZ &
09 Az
�������:
letter = 4, blank = 3, digit = 2, other = 1
*/
#include<stdio.h>
#define MAX 10
int main() {
	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;
	for(int i=0; i<MAX; i++) {
		//��ȡһ���ַ����������һ���ַ����� putchar(c);
		char c = getchar();
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
	return 0;
}


