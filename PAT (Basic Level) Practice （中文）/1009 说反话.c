/*
1009 ˵���� ��20 �֣�
����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ��
�����������һ��������������һ���ڸ����ܳ��Ȳ����� 80 ���ַ�����
�ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ�����
����֮���� 1 ���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��
ÿ���������������ռһ�У���������ľ��ӡ�

����������
Hello World Here I Come
���������
Come I Here World Hello
����: CHEN, Yue
��λ: �㽭��ѧ
ʱ������: 400 ms
�ڴ�����: 64 MB
���볤������: 16 KB

*/
#include<stdio.h>
#include<string.h>
int main() {
	char chars[81];
	gets(chars);
	int length = strlen(chars);
//	printf("%d\n",length);
//	printf("%s\n",chars);
	int end = length-1;
	int start = 0;
	for(int i=end; i>=0; i--) {
		
		if(chars[i]==' ') {
			start = i;
			for(int j=start; j<end+1; j++) {
				printf("%c",chars[j]);
			}
			//	printf("-");
		}
	}

	return 0;
}

