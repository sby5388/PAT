/*
7-85 ͳ�ƴ�д������ĸ ��15 �֣�
Ӣ�ĸ�����ĸ�ǳ�A��E��I��O��U�������ĸ��
����Ҫ���д����ͳ�Ƹ����ַ����д�д������ĸ�ĸ�����

�����ʽ��
������һ���и���һ��������80���ַ������Իس��������ַ�����

�����ʽ��
�����һ���и����ַ����д�д������ĸ�ĸ�����

����������
HELLO World!
���������
4
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int i = 0;
	int count =0;
	while((chars[i]=getchar())!='\n') {
		char c = chars[i];
		if(c>='A'&&c<='Z') {
			if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
				//nothing
			} else {
				count++;
			}
		}

		i++;
	}
	printf("%d",count);

	return 0;
}



