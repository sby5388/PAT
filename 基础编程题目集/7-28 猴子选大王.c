/*
7-28 ����ѡ���� ��20 �֣�
һȺ����Ҫѡ�º������º�����ѡ�񷽷��ǣ�
��Nֻ��ѡ����Χ��һȦ����ĳλ����˳����Ϊ1~N�š�
�ӵ�1�ſ�ʼ������ÿ�ִ�1����3��������3�ĺ��Ӽ��˳�Ȧ�ӣ������ִӽ��ڵ���һֻ���ӿ�ʼͬ���ı�����
��˲���ѭ�������ʣ�µ�һֻ���Ӿ�ѡΪ������
������ԭ���ڼ��ź��ӵ�ѡ������
�����ʽ��
������һ���и�һ��������N����1000����
�����ʽ��
��һ���������ѡ�����ı�š�
����������
11
���������
7
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	if(N==1) {
		printf("1");
		return 0;
	}
	int monkeys[N];
	for(int i=0; i< N; i++) {
		monkeys[i]=0;
	}
	int remains = N;
	int current = 0;
	int result =1;
	while(result) {
		for(int i=0; i< N; i++) {
			if(monkeys[i]==0) {
				current++;
				if(current%3==0) {
					remains--;
					monkeys[i]=1;
					if(remains==1) {
						result=0;
						break;
					}

				}
			}
		}
	}
	for(int i=0; i<N; i++) {
		if(monkeys[i]==0) {
			result = i;
			break;
		}
	}

	printf("%d",result+1);
	return 0;
}

