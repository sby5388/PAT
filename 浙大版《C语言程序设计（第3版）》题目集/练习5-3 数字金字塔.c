/*
��ϰ5-3 ���ֽ����� ��15 �֣�
����Ҫ��ʵ�ֺ������n�����ֽ�������

�����ӿڶ��壺
void pyramid( int n );
����n���û�����Ĳ�����Ϊ[1, 9]����������Ҫ����������������ʾ�ĸ�ʽ��ӡ��n�����ֽ�������ע

��ÿ�����ֺ����һ���ո�
����������
5
���������
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include <stdio.h>
void pyramid( int n );
int main() {
	int n;

	scanf("%d", &n);
	pyramid(n);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void pyramid( int n ) {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n-i-1; j++) {
			printf(" ");
		}
		for(int k=0; k<=i; k++) {
			printf("%d ",i+1);
		}
		printf("\n");
	}
}

