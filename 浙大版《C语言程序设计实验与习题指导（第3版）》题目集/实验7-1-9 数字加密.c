/*
ʵ��7-1-9 ���ּ��� ��15 �֣�
����һ����λ����������ܺ������
�����ǽ�����ÿһλ�ϵ����ּ�9��Ȼ�����10ȡ�࣬��Ϊ��λ�ϵ������֣�
���ǧλ��ʮλ�ϵ����ֻ�������λ�͸�λ�ϵ����ֻ�����
��ɼ��ܺ������λ����
��������1257��������9ȡ���õ�������0146���پ������λ�λ��õ�4601��

�����ʽ��
������һ���и���һ����λ������x����Ҫ�󱻼��ܵ�����

�����ʽ��
��һ���а��ո�ʽ��The encrypted number is V��������ܺ�õ�������V��

����������
1257
���������
The encrypted number is 4601
*/
#include<stdio.h>
const int N = 4;
int main() {
	char codes[N];
	for(int i=0; i<N; i++) {
		scanf("%c",&codes[i]);
	}
	for(int i=0; i<N; i++) {
		codes[i] = ((codes[i]-'0'+9)%10)+'0';
		
	}
	char temp = codes[0];
	codes[0]=codes[2];
	codes[2] = temp;
	temp = codes[1];
	codes[1] =codes[3];
	codes[3] = temp;
	printf("The encrypted number is ");
	for(int i=0; i<N; i++) {
		printf("%c",codes[i]);
	}
	return 0;
}

