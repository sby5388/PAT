/*
7-58 �����������г��ִ��������� ��15 �֣�
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
typedef struct {
	int key;
	int value
} Number;
int main() {
	int N;
	scanf("%d",&N);
	int count[N];
	for(int i=0; i<N; i++) {
		count[i] = 0;
	}
	int temp;
	for(int i=0; i<N; i++) {
		scanf("%d",&temp);
		count[temp]=count[temp]+1;
	}
	int maxId =0;
	int max =count[0];
	for(int i=0; i<N; i++) {
		if(count[i]>max) {
			maxId = i;
			max = count[i];
		}
	}
	printf("%d %d",maxId,max);
	return 0;
}

