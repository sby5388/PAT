/*
7-101 �򻯵Ĳ������� ��15 �֣�
����Ҫ���д���򣬽�һ�������������嵽ԭ����������������У�ʹ���������Ȼ����

�����ʽ��
�����ڵ�һ���ȸ����Ǹ�����N��<10�����ڶ��и���N����С�����ź�˳��������������и���һ������X��

�����ʽ��
��һ���������X�������Ȼ��С����������������У�ÿ�����ֺ�����һ���ո�

����������
5
1 2 4 5 7
3
���������
1 2 3 4 5 7
*/
#include<stdio.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);

	int numbers[N];
	int numbers2[N+1];
	for(int i=0; i<N; i++) {
		scanf("%d",&numbers[i]);
	}
	int key;
	scanf("%d",&key);
	int insert = 0;
	for(int i=0; i<N; i++) {
		int temp =numbers[i];
		if(key>temp) {
			numbers2[i]=temp;
		} else {
			if(insert==0) {
				numbers2[i]=key;
				insert =1;
			}
			numbers2[i+1] = temp;
		}
	}
	if(insert==0) {
		numbers2[N]=key;
	}
	for(int i=0; i<N+1; i++) {
		printf("%d ",numbers2[i]);
	}
	return 0;
}


