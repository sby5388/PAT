/*
黑洞数也称为陷阱数，又称“Kaprekar问题”，是一类具有奇特转换特性的数。

任何一个各位数字不全相同的三位数，经有限次“重排求差”操作，总会得到495。
最后所得的495即为三位黑洞数。所谓“重排求差”操作即组成该数的数字重排后的最大数减去重排后的最小数。（6174为四位黑洞数。）

例如，对三位数207：

第1次重排求差得：720 - 27 ＝ 693；
第2次重排求差得：963 - 369 ＝ 594；
第3次重排求差得：954 - 459 ＝ 495；
以后会停留在495这一黑洞数。如果三位数的3个数字全相同，一次转换后即为0。

任意输入一个三位数，编程给出重排求差的过程。

输入格式：
输入在一行中给出一个三位数。

输出格式：
按照以下格式输出重排求差的过程：

序号: 数字重排后的最大数 - 重排后的最小数 = 差值
序号从1开始，直到495出现在等号右边为止。

输入样例：
123
输出样例：
1: 321 - 123 = 198
2: 981 - 189 = 792
3: 972 - 279 = 693
4: 963 - 369 = 594
5: 954 - 459 = 495
*/
#include<stdio.h>
#define answer 495
int getValue(int number,int position);
int main() {
	int number;

	scanf("%d",&number);
	int position =1;
	while((answer-number)!=0 ) {
		number = getValue(number,position);
		position ++;
	}
	return 0;
}

int getValue(int number,int position) {

	//todo 如果三位数的3个数字全相同，一次转换后即为0。
	int result  = 0;
	int max,mid,min;
	int temp;
	max = mid = min = number%10;
	while(number>0) {
		temp = number%10;
		if(temp>max) {
			max = temp;
		} else	if(temp<min) {
			min = temp;
		} else {
			mid = temp;
		}
		number = number/10;
	}

	int maxValue = 100*max +10*mid +min;
	int minValue = 100*min+10*mid +max;
	result  = maxValue - minValue;
	printf("%d: %d - %d = %d\n",position,maxValue,minValue,result);

	return result;
}

