/*

*/
#include<stdio.h>
#include<string.h>
#define MAX 81
int main() {
	//�����ַ���%c
	//�ַ�����%s

	char str[MAX];
	//TODO  ����Ҫ��ȡ����һ���У�������ʹ�ÿո�����Ϊ��������ı�־
	//	scanf("%s",&str);
	gets(str);
	int length = strlen(str);
	for(int i=length-1; i>=0; i--) {
		printf("%c",str[i]);
	}
	return 0;
}

