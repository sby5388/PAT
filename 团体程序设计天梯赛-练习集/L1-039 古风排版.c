/*
L1-039 �ŷ��Ű� ��20 �֣�
�й��Ĺ���д���֣��Ǵ������������Ű�ġ�����������д���򣬰�һ�����ְ��ŷ��Ű档

�����ʽ��
�����ڵ�һ�и���һ��������N��<100������ÿһ�е��ַ�����
�ڶ��и���һ�����Ȳ�����1000�ķǿ��ַ������Իس�������

�����ʽ��
���ŷ��ʽ�Ű�������ַ�����ÿ��N���ַ����������һ�п��ܲ���N������

����������
4
This is a test case
���������
asa T
st ih
e tsi
 ce s
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d\n",&N);
	char words[1000];
	char c;
	int length = 0;

	while((c=getchar())!='\n') {
		words[length++]=c;
	}

//	int N = 4;
//	char words[1000] ="This is a test case";
//	int length = 20;



	words[length]='\0';
	int count = length/N;
	if(length%4!=0) {
		count++;
	}


	for(int i=0; i<N; i++) {
		for(int k=length; k>-1; k--) {
//			printf("===\n");
			if(k%N==i) {
				printf("%c",words[k]);
			}
		}
		printf("\n");
	}

	return 0;
}

