/*
ϰ��7-8 �ַ���ת����ʮ�������� ��15 �֣�
����һ����#�������ַ���������Ҫ����ȥ���еķ�ʮ�������ַ������ִ�Сд����
���һ���µı�ʾʮ���������ֵ��ַ�����Ȼ����ת��Ϊʮ�������������
����ڵ�һ��ʮ�������ַ�֮ǰ�����ַ���-�������������Ǹ�����

�����ʽ��
������һ���и���һ����#�����ķǿ��ַ�����

�����ʽ��
��һ�������ת�����ʮ����������Ŀ��֤����ڳ����ͷ�Χ�ڡ�

����������
+-P-xf4+-1!#
���������
-3905
*/
#include<stdio.h>
#include<string.h>
#define return return
int main() {
//	printf("%d\n",'a');
//	printf("%d\n",'A');
//	printf("%d\n",'0');
	char chars[81];
	int index  = 0;
	while((chars[index]=getchar())!='#') {
		index++;
	}
	chars[index] = '\0';
	int x=0;
	for(int i=0; i<index; i++) {
		char c  = chars[i];
		if(c=='x'||c=='X'||(c>='a'&&c<='f')||(c>='A'&&c<='F')||(c>='0'&&c<='9') ) {
			x=i;
			break;
		}
	}
	int fushu = 0;
	for(int i=0; i<x; i++) {
		if(chars[i]=='-') {
			fushu = 1;
			break;
		}
	}
//���ݹ���ʱ �����˸���
	double result = 0;
	for(int i=0; i<index; i++) {
		char c  = chars[i];
		if((c>='A'&&c<='F')||(c>='a'&&c<='f')||(c>='0'&&c<='9')) {
			int temp;
			if(c>='A'&&c<='F') {
				temp = c-'A'+10;
			} else if(c>='a'&&c<='f') {
				temp = c-'a'+10;
			} else {
				temp = c-'0';
			}
			result  = result *16 +temp;
		}
	}
	if(fushu) {
		result*=-1;
	}
	printf("%.0lf",result);

	return 0;
}


