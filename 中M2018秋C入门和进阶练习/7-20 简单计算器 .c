/*
ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ��������������������������ȼ���ͬ���������ҵ�˳����㡣

�����ʽ:
������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������

�����ʽ:
��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����

��������:
1+2*10-10/2=
�������:
10
*/
#include<stdio.h>
#include<string.h>
#define END =
int main() {
	char *chars;
	gets(chars);
	printf("%s\n",chars);
	int length = strlen(chars);
	printf("length  = %d\n",length);

	int n,m;


	for(int i=0; i<length; i++) {
		char c=chars[i];
		printf("%c\n",c);
	}
	return 0;
}

