/*
ϰ��6-6 ʹ�ú������һ�������������� ��20 �֣�
����Ҫ��ʵ��һ�����������������ļ򵥺�����

�����ӿڶ��壺
int reverse( int number );
���к���reverse�뷵���û����������number����������

���в��Գ���������

����������
-12340
���������
-4321
*/
#include <stdio.h>

int reverse( int number );

int main() {
	int n;

	scanf("%d", &n);
	printf("%d\n", reverse(n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int reverse( int number ) {
	int fushu = 0;
	if(number<0) {
		fushu = 1;
		number = 0-number;
	}
	int result = 0;
    while(number>0){
    	result = result*10 + number%10;
    	number = number/10;
	}
	if(fushu==1){
		result=0-result;
	}
	return result;
}

