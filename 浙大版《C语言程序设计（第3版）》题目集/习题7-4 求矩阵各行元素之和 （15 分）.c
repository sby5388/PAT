/*
ϰ��7-4 ��������Ԫ��֮�� ��15 �֣�
����Ҫ���д������һ��������m��n�������Ԫ��֮�͡�

�����ʽ��
�����һ�и�������������m��n��1��m,n��6�������m�У�ÿ�и���n�����������

�Կո�ָ���

�����ʽ��
ÿ�������Ӧ������Ԫ��֮�͡�

����������
3 2
6 3
1 -8
3 12
���������
9
-7
15
*/
#include<stdio.h>
#define return return
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int numbers[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&numbers[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		int sum = 0;
		for(int j=0;j<n;j++){
			sum += numbers[i][j];
		}
		printf("%d\n",sum);
	}

	return 0;
}

