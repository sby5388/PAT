/*
7-89 ������Сֵ�����ֵ ��15 �֣�
����Ҫ���д�����Ƚ������һϵ�������е���Сֵ���һ����������Ȼ�����ֵ�����һ��������������������������С�

ע�⣺��Ŀ��֤������Сֵ����Ψһ�ġ�

�����ʽ��
�����ڵ�һ���и���һ��������N����10�����ڶ��и���N�����������ּ��Կո�ָ���

�����ʽ��
��һ����˳���������������У�ÿ���������һ���ո�

����������
5
8 2 5 1 4
���������
1 2 5 4 8
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
	if(N>0) {
		int min = numbers[0];
		int minID = 0;
		for(int i=0; i<N; i++) {
			int temp =numbers[i];
			if(temp<min) {
				min = temp;
				minID = i;
			}
		}
		int temp2 = numbers[0];
		numbers[0]  = min;
		numbers[minID] = temp2;

		int max = numbers[0];
		int maxID = 0;

		for(int i=0; i<N; i++) {
			int temp =numbers[i];
			if(temp>max) {
				max = temp;
				maxID = i;
			}
		}
		temp2  = numbers[N-1];
		numbers[N-1] = max;
		numbers[maxID] = temp2;
		for(int i=0; i<N; i++) {
			printf("%d ",numbers[i]);
		}
	}

	return 0;
}


