#include <stdio.h>
/*
本题要求实现一个打印非负整数阶乘的函数。
函数接口定义：
void Print_Factorial ( const int N );
其中N是用户传入的参数，其值不超过1000。
如果N是非负整数，则该函数必须在一行中打印出N!的值，否则打印“Invalid input”。
*/
void Print_Factorial ( const int N );

int main() {
	int N;

	scanf("%d", &N);
	Print_Factorial(N);
	return 0;
}

/* 你的代码将被嵌在这里 */
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
