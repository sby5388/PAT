/*
��ν�������Ǹ���ǡ�õ��ڳ������������֮�͡�
���磺6=1+2+3������1��2��3Ϊ6�����ӡ�
����Ҫ���д�����ҳ�������������m��n֮�������������

�����ʽ��
������һ���и���2��������m��n��1<m��n��10000�����м��Կո�ָ���

�����ʽ��
�������������Χ��ÿ�������������ۼ���ʽ�ķֽ�ʽ��
ÿ������ռһ�У���ʽΪ������ = ����1 + ����2 + ... + ����k����
�������������Ӿ�������˳���������������û���������������None����

����������
2 30
���������
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
*/
#include<stdio.h>
int isWanshu(int n);
void showWanshu(int n);
int main() {
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int count = 0;
	for(int i=m; i<=n; i++) {
		if(isWanshu(i)==1) {
			count++;
			showWanshu(i);
		}
	}
	if(count==0) {
		printf("None");
	}

	return 0;
}
int isWanshu(int N) {
	int sum = 0;
	for(int i=1; i<N; i++) {
		if(0==N%i) {
			sum+=i;
		}
	}
	if(sum==N) {
		return 1;
	} else {
		return 0;
	}
}
void showWanshu(int n) {
	printf("%d = 1",n);
	for(int i=2; i<n; i++) {
		if(n%i==0) {
			printf(" + %d",i);
		}
	}
	printf("\n");
}

