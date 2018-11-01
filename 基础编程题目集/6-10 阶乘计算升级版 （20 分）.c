#include <stdio.h>
/*
����Ҫ��ʵ��һ����ӡ�Ǹ������׳˵ĺ�����
�����ӿڶ��壺
void Print_Factorial ( const int N );
����N���û�����Ĳ�������ֵ������1000��
���N�ǷǸ���������ú���������һ���д�ӡ��N!��ֵ�������ӡ��Invalid input����
*/
void Print_Factorial ( const int N );

int main() {
	int N;

	scanf("%d", &N);
	Print_Factorial(N);
	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void Print_Factorial ( const int N ) {
	if(N<0) {
		printf("Invalid input");
		return;
	}

	if(N==0) {
		printf("1");
		return;
	}


	if(N>1000) {
		printf("Invalid input");
		return;
	}

	int n=N;
	unsigned  long long result = 1;
	while(n>1) {
		result *= n;
		n--;
	}
	printf("%lld",result);
}
