/*
��ϰ4-10 �ҳ���Сֵ ��20 �֣�
����Ҫ���д�����ҳ�����һϵ�������е���Сֵ��

�����ʽ��
������һ�������ȸ���һ��������n��֮����n������������Կո�ָ���

�����ʽ��
��һ���а��ա�min = ��Сֵ���ĸ�ʽ���n�������е���Сֵ��

����������
4 -2 -123 100 0
���������
min = -123
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	int first =1;
	int min;
	int temp;
	for(int i=0; i<N; i++) {
		scanf("%d",&temp);
		if(first) {
			min = temp;
			first = 0;
		}
		if(temp <= min) {
			min = temp;
		}
	}
	printf("min = %d",min);
	return 0;
}
