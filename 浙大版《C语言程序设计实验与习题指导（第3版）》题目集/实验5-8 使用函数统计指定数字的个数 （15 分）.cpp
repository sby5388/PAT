#include <stdio.h>
/**
����Ҫ��ʵ��һ��ͳ��������ָ�����ֵĸ����ļ򵥺�����
�����ӿڶ��壺
int CountDigit( int number, int digit );
����number�ǲ����������͵�������digitΪ[0, 9]�����ڵ�������
����CountDigitӦ����number��digit���ֵĴ�����
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
		number*=(-1);
	}
	int count  = 0;
	while(number>=0) {
		int result  = number % 10;
		if(digit==result) {
			count++;
		}
		number = number/10;
		if(number==digit) {
			break;
		}
	}
	return count;

}

