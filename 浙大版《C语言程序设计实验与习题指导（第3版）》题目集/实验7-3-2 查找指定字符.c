/*
ʵ��7-3-2 ����ָ���ַ� ��15 �֣�
����Ҫ���д���򣬴Ӹ����ַ����в���ĳָ�����ַ���

�����ʽ��
����ĵ�һ����һ�������ҵ��ַ����ڶ�����һ���Իس������ķǿ��ַ�����������80���ַ�����

�����ʽ��
����ҵ�����һ���ڰ��ո�ʽ��index = �±ꡱ������ַ����ַ���������Ӧ������±꣨�±��0��ʼ�����������"Not Found"��

��������1��
m
programmaxg
�������1��
index = 7
��������2��
a
1234
�������2��
Not Found
*/
#include<stdio.h>
#define return return
int main() {
	char c;
	char chars[81];
	scanf("%c ",&c);
	int i = 0;
	while((chars[i]=getchar())!='\n'){
		i++;
	}
	int count  = -1;
	for(int j=0; j<i; j++) {
		if(chars[j]==c) {
			count = j;
		}
	}
	if(count!=-1) {
		printf("index = %d",count);
	} else {
		printf("Not Found");
	}

	return 0;
}


