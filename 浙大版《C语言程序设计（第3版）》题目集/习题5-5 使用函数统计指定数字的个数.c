#include <stdio.h>
/**
ϰ��5-5 ʹ�ú���ͳ��ָ�����ֵĸ��� ��15 �֣�
����Ҫ��ʵ��һ��ͳ��������ָ�����ֵĸ����ļ򵥺�����
�����ӿڶ��壺
int CountDigit( int number, int digit );
����number�ǲ����������͵�������digitΪ[0, 9]�����ڵ�������
����CountDigitӦ����number��digit���ֵĴ�����
����������
-21252 2
���������
Number of digit 2 in -21252: 3
*/

int CountDigit( int number, int digit );

int main() {
	int number, digit;

	scanf("%d %d", &number, &digit);
	printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int CountDigit( int number, int digit ) {
	if(number<0) {
		number*=-1;
	}
	if(number==digit) {
		return 1;
	}
	int count  = 0;
	while(number>0) {
		int result  = number % 10;
		if(digit==result) {
			count++;
		}
		number = number/10;

	}
	return count;

}

