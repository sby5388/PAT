/*
ʵ��4-2-8 ���������λ���� ��15 �֣�
����Ҫ���д���򣬶������һ���������Ӹ�λ��ʼ��λ�ָ������ĸ�λ���֡�

�����ʽ��
������һ���и���һ�������ͷ�Χ�ڵķǸ�������

�����ʽ��
�Ӹ�λ��ʼ��λ����������ĸ�λ���֣�ÿ�����ֺ�����һ���ո�

����������
123456
���������
1 2 3 4 5 6
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	if(N==0) {
		printf("0 ");
		return 0;
	}
	int N1 = N;
	int length = 0;
	while(N>0) {
		length++;
		N = N/10;
	}
	int count[length];
	for(int i=0; i<length; i++) {
		count[i]=N1%10;
		N1=N1/10;
	}
	for(int i=length-1; i>=0; i--) {
		printf("%d ",count[i]);
	}
	return 0;
}
