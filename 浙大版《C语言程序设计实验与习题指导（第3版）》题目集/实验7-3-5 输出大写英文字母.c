/*
ʵ��7-3-5 �����дӢ����ĸ ��15 �֣�
����Ҫ���д����˳����������ַ����������ֹ��Ĵ�дӢ����ĸ��
ÿ����ĸֻ���һ�飻���޴�дӢ����ĸ�������Not Found����

�����ʽ��
����Ϊһ���Իس��������ַ���������80���ַ�����

�����ʽ��
���������˳����һ������������ֹ��Ĵ�дӢ����ĸ��ÿ����ĸֻ���һ�顣���޴�дӢ����ĸ�������Not Found����

��������1��
FONTNAME and FILENAME
�������1��
FONTAMEIL
��������2��
fontname and filrname
�������2��
Not Found
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int index = 0;
	while((chars[index]=getchar())!='\n') {
		index++;
	}
	int empty  = 1;
	int numbers[26]= {0};
	for(int i=0; i<index; i++) {
		char c  = chars[i];
		if(c>='A'&&c<='Z') {
			if(numbers[c-'A']==0) {
				numbers[c-'A'] = 1;
				empty = 0;
				printf("%c",c);
			}
		}
	}
	if(empty) {
		printf("Not Found");
	}
	return 0;
}

