/*
����Ҫ�������A-B�������鷳����,A��B�����ַ��� ���� ��
���ַ���A�а��ַ���B���������ַ�ȫɾ��,ʣ�µ��ַ���ɵľ����ַ���A-B��
�����ʽ��
������2�����Ⱥ�����ַ���A��B�����ַ����ĳ��ȶ�������104,
���ұ�֤ÿ���ַ��������ɿɼ���ASCII��Ϳհ��ַ����,����Ի��з�������

�����ʽ��
��һ���д�ӡ��A-B�Ľ���ַ�����

����������
I love GPLT!  It's a fun game!
aeiou
���������
I lv GPLT!  It's  fn gm!

*/
#include<stdio.h>
#include<string.h>
#define MAX 105
int main() {
	char A[105];
	char B[105];
	int lengthA=0;
	char c;
	scanf("%c",&c);
	while(c!='\n') {
		A[lengthA]=c;
		lengthA++;
		scanf("%c",&c);
	}
	int lengthB = 0;
	scanf("%c",&c);
	while(c!='\n') {
		B[lengthB]=c;
		lengthB++;
		scanf("%c",&c);
	}
	for(int i=0; i<lengthB; i++) {
		char b = B[i];
		for(int j=0; j<lengthA; j++) {
			if(b==A[j]) {
				A[j]='\n';
			}
		}
	}
	for(int j=0; j<lengthA; j++) {
		if('\n'!=A[j]) {
			printf("%c",A[j]);
		}
	}

	return 0;
}
