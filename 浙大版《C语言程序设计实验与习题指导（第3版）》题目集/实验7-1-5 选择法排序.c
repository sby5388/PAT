/*
ʵ��7-1-5 ѡ������ ��20 �֣�
����Ҫ�󽫸�����n�������Ӵ�С����������

�����ʽ��
�����һ�и���һ��������10��������n���ڶ��и���n������������Կո�ָ���

�����ʽ��
��һ��������Ӵ�С��������У��������ּ���һ���ո���ĩ�����ж���ո�

����������
4
5 1 7 6
���������
7 6 5 1
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);
	int numbers[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&numbers[i]);
	}
//	todo ѡ�����򷨣�ÿһ�� �ҵ������Ǹ����ڵ�һ

	for(int i=0; i<N; i++) {
		int max = numbers[i];
		int maxID = i;
		for(int j = i; j<N; j++) {
			if(numbers[j]>max) {
				max = numbers[j];
				maxID = j;
			}
		}
		int temp =numbers[i];
		numbers[i] = max;
		numbers[maxID] = temp;
	}
	for(int i=0; i<N; i++) {
		if(i==0) {
			printf("%d",numbers[i]);
		} else {
			printf(" %d",numbers[i]);
		}
	}


	return 0;
}


