/*
1���ʳ��ȣ�4�֣�
��Ŀ���ݣ�

��ĳ���Ҫ����һ���ı��������Կո�ָ�Ϊ���ɸ����ʣ��ԡ�.��������
��Ҫ��������ı���ÿ�����ʵĳ��ȡ�����ĵ����������޹أ����԰������ַ��ţ�
���硰it's����һ�����ʣ�����Ϊ4��ע�⣬���п��ܳ��������Ŀո�

�����ʽ:
������һ���и���һ���ı����ԡ�.����������β�ľ�Ų��ܼ��������һ�����ʵĳ����ڡ�

�����ʽ��
��һ������������ı���Ӧ�ĵ��ʵĳ��ȣ�ÿ������֮���Կո��������ĩû�����Ŀո�

����������
It's great to see you here.

���������
4 5 2 3 3 4
*/
#include<stdio.h>
#include<string.h>
#define return return
int main() {
	char c;
	scanf("%c",&c);
	int first = 1;
	int length = 0;


	while(c!='.') {
		if(c!=' ') {
			length++;
		} else {
			if(length!=0) {
				if(first) {
					printf("%d",length);
					first = 0;
				} else {
					printf(" %d",length);
				}
			}
			length = 0;
		}
		scanf("%c",&c);
	}

	if(length!=0) {
		if(first) {
			printf("%d",length);
			first = 0;
		} else {
			printf(" %d",length);
		}
	}

	return 0;
}

