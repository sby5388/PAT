/*
ϰ��6-2 ʹ�ú���������a�����к� ��20 �֣�
����������������9��������a��n��Ҫ���д������a+aa+aaa++��+aa��a��n��a��֮�͡�

�����ӿڶ��壺
int fn( int a, int n );
int SumA( int a, int n );
���к���fn�뷵�ص���n��a��ɵ����֣�SumA����Ҫ��ĺ͡�

���в��Գ���������

����������
2 3
���������
fn(2, 3) = 222
s = 246
*/
#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main() {
	int a, n;

	scanf("%d %d", &a, &n);
	printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
	printf("s = %d\n", SumA(a,n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int fn( int a, int n ){
	int result  = 0;
	for(int i=0;i<n;i++){
		result = result *10 +a;
	}
	return result;
}
int SumA( int a, int n ){
	int sum = 0;
	int count = 1;
	for(int i=0;i<=n;i++){
		sum = sum*10 + count*i;
	}
	return sum*a;

}
