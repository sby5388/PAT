#include <stdio.h>
/**
����Ҫ��ʵ��һ����������ͳ����һ������ĳ��λ�����ֵĴ�����
����-21252�У�2������3�Σ���ú���Ӧ�÷���3��
�����ӿڶ��壺
int Count_Digit ( const int N, const int D );
����N��D�����û�����Ĳ�����N��ֵ������int�ķ�Χ��
D��[0, 9]�����ڵĸ�λ���������뷵��N��D���ֵĴ���
*/
int Count_Digit ( const int N, const int D );

int main() {
	int N, D;

	scanf("%d %d", &N, &D);
	printf("%d\n", Count_Digit(N, D));
	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Count_Digit ( const int N, const int D ) {
	if(N==D) {
		return 1;
	}
	int n=N;
	if(n<0) {
		n=0-n;
	}
	int count = 0;
	while(n>0) {
		if(D==(n%10)) {
			count++;

		}
		n=n/10;
	}
	return count;


}
