/*
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
	int temp;
	int max,id;
	int isFirst =1;
	for(int i=0; i<N; i++) {
		scanf("%d",&temp);

		if(isFirst) {
			max = temp;
			id =i;
			isFirst = 0;
		} else {
			if(temp>max) {
				max= temp;
				id = i;
			}

		}
	}
	printf("%d %d",max,id);
	return 0;
}

