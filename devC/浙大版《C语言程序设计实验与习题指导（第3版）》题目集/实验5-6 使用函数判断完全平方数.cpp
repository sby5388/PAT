#include <stdio.h>
#include <math.h>

/*
����Ҫ��ʵ��һ���ж������Ƿ�Ϊ��ȫƽ�����ļ򵥺�����

�����ӿڶ��壺
int IsSquare( int n );
����n���û�����Ĳ������ڳ����ͷ�Χ�ڡ�
���n����ȫƽ����������IsSquare���뷵��1�����򷵻�0��
*/
int IsSquare( int n );

int main() {
	int n;

	scanf("%d", &n);
	if ( IsSquare(n) ) printf("YES\n");
	else printf("NO\n");

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int IsSquare( int n ){
	int max = (int)sqrt(n);
	if(max*max == n){
		return 1;
	}
	return 0;
}
