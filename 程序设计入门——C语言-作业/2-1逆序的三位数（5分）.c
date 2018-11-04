/*
题目内容：逆序的三位数：
程序每次读入一个正三位数，然后输出逆序的数字.
注意，当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。
提示：用%10可以得到个位数，用/100可以得到百位数...。
将这样得到的三个数字合起来：百位*100+十位*10+个位，就得到了结果。
注意：除了题目要求的输出，不能输出任何其他内容，比如输入时的提示，输出时的说明等等都不能。
这道题目要求输出逆序的数字，程序就只能输出这个数字，除此之外任何内容都不能输出。
输入格式:
每个测试是一个3位的正整数。
输出格式：
输出逆序的数。

输入样例：
123

输出样例：

321

时间限制：500ms内存限制：32000kb
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	int result = 0;
	while(N>0) {
		result = result *10 +N%10;
		N/=10;
	}
	printf("%d",result);
	return 0;
}

