/*
7-61 ������ַ��� ��15 �֣�
����Ҫ���д������������N���ַ����������������ַ�����

�����ʽ��
�����һ�и���������N�����N�У�
ÿ�и���һ������С��80�ķǿ��ַ��������в�����ֻ��з����ո��Ʊ����

�����ʽ��
��һ���������¸�ʽ�������ַ�����

The longest is: ����ַ���
����ַ����ĳ�����ͬ���������������ַ�����

����������
5
li
wang
zhang
jin
xiang
���������
The longest is: zhang
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d\n",&N);
	char word[N][81];
	int length[N];
	for(int i=0; i<N; i++) {
		printf("i ===== %d\n",i);
		int len = 0;
		char c = getchar();
		while(c!=' '&& c!='\t' && c!='\n') {
//			printf("i = %d\n",i);
//			printf("%c\n",c);
			word[i][len] = c;
			len++;
			c = getchar();
		}
		word[i][len] = '\0';
		length[i] = len;
	}
	int maxID = 0;
	int max = length[0];
	for(int i=0; i<N; i++) {
		if(length[i]>max) {
			max = length[i];
			maxID = i;
		}
	}

	printf("The longest is: %d",word[maxID]);


	return 0;
}

