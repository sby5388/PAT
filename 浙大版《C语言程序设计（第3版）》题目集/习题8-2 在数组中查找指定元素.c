/*
ϰ��8-2 �������в���ָ��Ԫ�� ��15 �֣�
����Ҫ��ʵ��һ���������в���ָ��Ԫ�صļ򵥺�����

�����ӿڶ��壺
int search( int list[], int n, int x );
����list[]���û���������飻n����0����list[]��Ԫ�صĸ�����x�Ǵ����ҵ�Ԫ�ء�����ҵ�

����search������ӦԪ�ص���С�±꣨�±��0��ʼ�������򷵻�-1��

���в��Գ���������

��������1��
5
1 2 2 5 4
2
�������1��
index = 1
��������2��
5
1 2 2 5 4
0
�������2��
Not found
*/
#include <stdio.h>
#define MAXN 10
int search( int list[], int n, int x );
int main() {
	int i, index, n, x;
	int a[MAXN];

	scanf("%d", &n);
	for( i = 0; i < n; i++ ) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);
	index = search( a, n, x );
	if( index != -1 ) {
		printf("index = %d\n", index);
	}	else {
		printf("Not found\n");
	}


	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int search( int list[], int n, int x ) {
	int index = -1;
	for(int  i = 0; i < n; i++ ) {
		if(x==list[i]) {
			index = i;
			break;
		}
	}
	return index;
}

