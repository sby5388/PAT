#include <stdio.h>
/**
����Ҫ��ʵ��һ������Ǹ������׳˵ļ򵥺�����
�����ӿڶ��壺
int Factorial( const int N );
����N���û�����Ĳ�������ֵ������12�����N�ǷǸ���������ú������뷵��N�Ľ׳ˣ����򷵻�0��
*/
int Factorial( const int N );

int main() {
	int N, NF;

	scanf("%d", &N);
	NF = Factorial(N);
	if (NF)  printf("%d! = %d\n", N, NF);
	else printf("Invalid input\n");

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Factorial( const int N ) {
	if(N<0) {
		return 0;
	}
	if(N==0) {
		return 1;
	}
	int result = 1;
	int n=N;
	while(n>1){
		result*=n;
		n--;
	}
	return result;
}
