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
void show(int N);
int main() {
//	int N;
//	scanf("%d",&N);
	//100y+f
	//n+200y+2f = 100f+y
	//n = 98f-199y

//	show(N);
	for(int i=-10; i<99; i++) {
		show(i);
	}

	return 0;
}
void show(int N) {
	{
		printf("\nN = %d   ",N);
	}

	int f =99;
	int y = 0;
	int result = 0;
	for(; f>0; f--) {
		for(y=99; y>0; y--) {
			if(N==(98*f - 199*y)) {
				if(f<49) {
					result = 1;
					printf("%d.%d",y,f);
					{
						int new_ = 100*f +y;
						int old_ = 100*y +f;
						if((new_-N)==old_*2) {
							printf("\t true");
						} else {
							printf("\t false");
						}
					}

					break;
				}

			}
		}
	}
	if(!result) {
		printf("No Solution");
	};
}


