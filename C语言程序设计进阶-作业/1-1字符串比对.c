/*
1�ַ����ȶԣ�10�֣�
��Ŀ���ݣ�

��Ŀ˵�����ܼ򵥣������������ַ�����ÿ���ַ���ռ��һ�У�
ÿ���ַ����ĳ��Ⱦ�С��10000�ַ������ҵ�һ���ַ����ĳ���С�ڵڶ����ַ����ġ�
��ĳ���Ҫ�ҳ���һ���ַ����ڵڶ����ַ����г��ֵ�λ�ã������Щλ�ã�����Ҳ����������-1��

ע�⣬��һ���ַ���λ����0��
ע�⣬��һ���ַ����ڵڶ����ַ����е�λ�ÿ��ܲ�ֹһ����
ע�⣬�ַ����п��ܺ��пո�
ע�⣬�����ַ����ĳ���һ������0��

�����ʽ:

�����ַ�����һ��һ����

�����ʽ��
��һ���ַ����ڵڶ����ַ����г��ֵ�λ�ã����մ�С������˳�����У�ÿ�����ֺ�����һ���ո�
����ڵڶ����ַ������Ҳ�����һ���ַ����������-1��

����������
abba
ababbba abbabbabbabbaacc

���������

8 11 14 17
*/
#include<stdio.h>
#define return return
const int MAX = 10001;
int main() {
	char charA[MAX];
	char sub[MAX];
	
	int length2 = 0;
	while((sub[length2]=getchar())!='\n') {
		length2++;
	}
	sub[length2] = '\0';
	int length1 = 0;
	while((charA[length1]=getchar())!='\n') {
		length1++;
	}
	charA[length1]='\0';
	int empty = 1;

	for(int i=0;i<length1;i++){
		int exist = 1;
		for(int j=0;j<length2;j++){
			if(charA[i+j]!=sub[j]){
				exist = 0;
				break;
			}
		}
		if(exist){
			empty = 0;
			printf("%d ",i);
		}
		
	}

	if(empty) {
		printf("-1");
	}
	return 0;
}

