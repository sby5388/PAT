#include <stdio.h>
/**
本题要求实现一个统计整数中指定数字的个数的简单函数。
函数接口定义：
int CountDigit( int number, int digit );
其中number是不超过长整型的整数，digit为[0, 9]区间内的整数。
函数CountDigit应返回number中digit出现的次数。
*/

int CountDigit( int number, int digit );

int main() {
	int number, digit;

	scanf("%d %d", &number, &digit);
	printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

	return 0;
}

/* 你的代码将被嵌在这里 */
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

