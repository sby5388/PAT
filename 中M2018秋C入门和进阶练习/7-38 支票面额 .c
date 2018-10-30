/*
一个采购员去银行兑换一张y元f分的支票，结果出纳员错给了f元y分。
采购员用去了n分之后才发觉有错，于是清点了余额尚有2y元2f分，问该支票面额是多少？

输入格式：
输入在一行中给出小于100的正整数n。

输出格式：
在一行中按格式y.f输出该支票的原始面额。如果无解，则输出No Solution。

输入样例1：
23
输出样例1：
25.51
输入样例2：
22
输出样例2：
No Solution
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	//100y+f
	//n+200y+2f = 100f+y
	//n = 98f-199y
	int f =99;
	int y = 0;
	int result = 0;
	
	for(y=0;y<100;y++){
		for(f=y;f<100;f++){
			if((98*f-199*y)==N){
				printf("%d.%d",y,f);
				result = 1;
				break;
			}
		}
	} 
	
//	for(; f>0; f--) {
//		for(y=100; y>0; y--) {
//			if(N==(98*f - 199*y)) {
//				
//				printf("%d.%d",y,f);
//				result = 1;
//				break;
//			}
//		}
//	}
	if(!result) {
		printf("No Solution");
	}
	return 0;
}

