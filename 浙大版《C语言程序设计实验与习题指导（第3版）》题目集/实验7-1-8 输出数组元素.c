/*
ʵ��7-1-8 �������Ԫ�� ��15 �֣�
����Ҫ���д���򣬶�˳������n��������˳�μ�������ǰ��֮�����ÿ������Ԫ�صĸ�ʽ��������

�����ʽ��
����ĵ�һ�и���������n��1<n��10�������һ�и���n������������Կո�ָ���

�����ʽ��
˳�μ�������ǰ��֮�����ÿ������Ԫ�صĸ�ʽ�����������ּ��һ����ĩ�����ж���ո�

����������
10
5 1 7 14 6 36 4 28 50 100
���������
-4 6 7
-8 30 -32
24 22 50
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
	if(N>1) {
		for(int i=1; i<N; i++) {
			int temp =numbers[i]-numbers[i-1];
			int yu = i%3;
			switch(yu) {
				case 0:
					printf(" %d\n",temp);
					break;
				case 1:
					printf("%d",temp);
					break;
				case 2:
					printf(" %d",temp);
					break;
				default:
					break;
			}
		}
	}
	return 0;
}

