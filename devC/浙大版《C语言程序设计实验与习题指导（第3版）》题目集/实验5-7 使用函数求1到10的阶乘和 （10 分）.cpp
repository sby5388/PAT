#include <stdio.h>
/*
����Ҫ��ʵ��һ������Ǹ������׳˵ļ򵥺�����
ʹ�ÿ������øú���������1!+2!+?+10!��ֵ��

�����ӿڶ��壺
double fact( int n );
����n���û�����Ĳ�������ֵ������10��
���n�ǷǸ���������ú������뷵��n�Ľ׳ˡ�

*/

double fact( int n );

int main(void) {
	int i;
	double sum;

	sum = 0;
	for(i = 1; i <= 10; i++)
		sum = sum + fact(i);

	printf("1!+2!+...+10! = %f\n", sum);
	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

double fact( int n ){
	double result =1;
	while(n>0){
		result *= n;
		n--;
	}
	return result;
}
