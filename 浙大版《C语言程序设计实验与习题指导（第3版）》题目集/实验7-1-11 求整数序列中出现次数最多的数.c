/*
ʵ��7-1-11 �����������г��ִ�����������15 �֣�
����Ҫ��ͳ��һ�����������г��ִ�����������������ִ�����

�����ʽ��
������һ���и�����������������N��0<N��1000�����Լ�N�����������ּ��Կո�ָ���

�����ʽ��
��һ����������ִ�����������������ִ��������ּ��Կո�ָ�����Ŀ��֤������������Ψһ�ġ�

����������
10 3 2 -1 5 3 4 3 0 3 2
���������
3 4
*/
#include<stdio.h>
#define return return
int main() {
	int count[10] = {0};
	int N;
	scanf("%d",&N);
	int number[N];
	int count[N];
	int temp;
	for(int i=0; i<N; i++) {
		scanf("%d",&temp);
		int exist = 0;
		int position =-1;
		for(int j=0; j<i; j++) {
			if(number[j]==temp) {
				position = j;
				count[j] = count[j]+1;
				exist = 1;
				break;
			}
		}
	}

	return 0;
}


