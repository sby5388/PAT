/*
ʵ��7-1-2 �����ֵ�����±꣨20 �֣�
����Ҫ���д�����ҳ�������n�����е����ֵ�����Ӧ����С�±꣨�±��0��ʼ����

�����ʽ:
�����ڵ�һ���и���һ��������n��1<n��10�����ڶ�������n���������ÿո�ֿ���

�����ʽ:
��һ����������ֵ�����ֵ����С�±꣬�м���һ���ո�ֿ���

��������:
6
2 8 10 1 9 10
�������:
10 2
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	if(N>0) {
		int number[N];
		for(int i=0; i<N; i++) {
			scanf("%d",&number[i]);
		}
		int max =number[0];
		int id = 0;
		int isFirst =1;
		for(int i=0; i<N; i++) {
			int	temp   = number[i];
			if(temp>max) {
				max= temp;
				id = i;
			}
		}
		printf("%d %d",max,id);
	}
	return 0;
}


