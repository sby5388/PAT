/*
ʵ��6-9 ͳ��һ���ı��ĵ��ʸ��� ��15 �֣�
����ĿҪ���д����ͳ��һ���ַ��е��ʵĸ�������ν�����ʡ���ָ���������ո���ַ�����������֮���ÿո�ָ����ո��������Ƕ����

�����ʽ:
�������һ���ַ���

�����ʽ:
��һ����������ʸ�����

��������:
Let's go to room 209.
�������:
5
*/
#include<stdio.h>
#define return return
int main() {
	int count  = 0;
	char c = 0;
	int start = 0;
	int end = 0;

	scanf("%c",&c);
	while(c!='\n') {
		if(c!=' ') {
			if(end==0) {
				start = 1;
			} else {
				start  = 0;
			}

		} else {
			if(start==1) {
				end= 1;
			} else {
				end = 0;
			}
		}
		if(start && end) {
		//	printf("c = %c\n",c);
			count++;
			start = 0;
			end = 0;
		}
		scanf("%c",&c);
	}
	if(start==1&&end==0) {
		count++;
	}
	printf("%d",count);
	return 0;
}
