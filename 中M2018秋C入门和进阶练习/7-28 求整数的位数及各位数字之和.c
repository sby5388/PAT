/*
���ڸ�����������N��������λ�������λ����֮�͡�

�����ʽ��
������һ���и���һ��������10
?9
?? ��������N��

�����ʽ��
��һ�������N��λ�������λ����֮�ͣ��м���һ���ո������

����������
321
���������
3 6
*/



















#include<stdio.h>
void start(int n);
int main(){
	int N;
	scanf("%d",&N);
	start(N);
	return 0;
}
void start(int n){
	int sum = 0;
	int count = 0;
	while(n>0){
		sum+=n%10;
		n/=10;
		count++;
	}
	printf("%d %d",count,sum);
}

