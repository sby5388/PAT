/*
实验2-3-1 求1到100的和 （10 分）
本题要求编写程序，计算表达式 1 + 2 + 3 + ... + 100 的值。

输入格式：
本题无输入。

输出格式：
按照以下格式输出：

sum = 累加和
*/
#include<stdio.h>
int main(){
	int sum = 0;
	for(int i=1;i<=100;i++){
		sum+=i;
	}
	printf("sum = %d",sum);
	return 0;
}

