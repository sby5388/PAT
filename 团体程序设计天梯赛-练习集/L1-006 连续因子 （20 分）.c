/*
L1-006 �������� ��20 �֣�
һ�������� N �������п��ܴ����������������֡�
���� 630 ���Էֽ�Ϊ 3��5��6��7������ 5��6��7 ���� 3 �����������֡�
������һ������ N��Ҫ���д���������������ӵĸ������������С�������������С�

�����ʽ��
������һ���и���һ�������� N��1<N<2^31)

�����ʽ��
�����ڵ� 1 �������������ӵĸ�����
Ȼ���ڵ� 2 ���а� ����1*����2*����*����k �ĸ�ʽ�����С�������������У�
�������Ӱ�����˳�������1 �������ڡ�

����������
630
���������
3
5*6*7
*/
#include<stdio.h>
#include<math.h>
int main() {
	unsigned long long N;

	scanf("%lld",&N);
	unsigned long long M = N;
	int count =0;
	int min = 1;
	int max = 1;
	int temp = 0;
	for(int i=2; i<=N; i++) {
		int j = i;
		temp = 0;
		M = N;
		while(0==(M%j)) {
			temp++;
			M=M/j;
			j++;
		}
		if(temp>count) {
			count = temp;
			min =i;
		}

	}
	printf("%d\n",count);
	printf("%d",min);
	for(int i =1; i<count; i++) {
		printf("*%d",min+i);
	}
	return 0;
}

