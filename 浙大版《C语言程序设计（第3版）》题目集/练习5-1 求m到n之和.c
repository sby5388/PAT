/*
��ϰ5-1 ��m��n֮�� ��10 �֣�
����Ҫ��ʵ��һ������m~n��m<n��֮�����������ĺ͵ļ򵥺�����

�����ӿڶ��壺
int sum( int m, int n );
����m��n���û�����Ĳ�������֤��m<n���������ص���m~n֮�����������ĺ͡�
����������
-5 8
���������
sum = 21
*/
#include <stdio.h>

int sum(int m, int n);

int main() {
	int m, n;

	scanf("%d %d", &m, &n);
	printf("sum = %d\n", sum(m, n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int sum(int m, int n) {
	int sum = 0;
	for(int i=m; i<=n; i++) {
		sum+=i;
	}
	return sum;
}
