/*
ʵ��7-3-7 �ַ�ת�� ��15 �֣�
����Ҫ����ȡһ���ַ����е����������ַ���'0'����'9'��������ת��Ϊһ�����������

�����ʽ��
������һ���и���һ��������80���ַ����Իس��������ַ�����

�����ʽ��
��һ�������ת�������������Ŀ��֤��������������ͷ�Χ��

����������
free82jeep5
���������
825
*/
#include<stdio.h>
#define return return
int main() {
	char chars[81];
	int index  = 0;
	while((chars[index]=getchar())!='\n') {
		index++;
	}
	int first = 1;
	for(int i=0; i<index; i++) {
		char c  = chars[i];
		if(c>='0'&&c<='9') {
			if(first==1) {
				if(c!='0') {
					printf("%c",c);
					first = 0;
				}
			}else{
				printf("%c",c);
			}
		}
	}
	if(first==1){
		printf("0");
	}
	return 0;
}

