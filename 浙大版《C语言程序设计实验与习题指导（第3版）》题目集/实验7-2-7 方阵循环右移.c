/*
ʵ��7-2-7 ����ѭ������ ��20 �֣�
����Ҫ���д���򣬽�����n��n�����е�ÿ��Ԫ��ѭ��������m��λ�ã�
������0��1������n-1�б任Ϊ��n-m��n-m+1������n-1��0��1������n-m-1�С�

�����ʽ��
�����һ�и�������������m��n��1��n��6����������һ��n�У�ÿ��n����������ʾһ��n�׵ķ���

�����ʽ��
���������ʽ����ƶ���ķ��󣺼����n�У�ÿ��n��������ÿ�����������һ���ո�

����������
2 3
1 2 3
4 5 6
7 8 9
���������
2 3 1
5 6 4
8 9 7
*/
#include<stdio.h>
#define return return
int main() {
	int m,n;
	scanf("%d %d",&m,&n);

	while(m<0) {
		m+=n;
	}
	if(m!=0) {
		m = m%n;
	}


//	printf("%d\n",m);

	int number[n][n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d",&number[i][j]);
		}
	}

	for(int i=0; i<n; i++) {
		int temp[m];
		for(int k=0; k<m; k++) {
			temp[k] = number[i][n-m+k];
		}
		for(int j=n-1; j>m-1; j--) {
			number[i][j] =number[i][j-m];
		}
		for(int k=0; k<m; k++) {
			number[i][k] =temp[k];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("%d ",number[i][j]);
		}
		printf("\n");
	}



	return 0;
}


