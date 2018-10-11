/**
据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。
真实体重与标准体重误差在10%以内都是完美身材（即 | 真实体重 ? 标准体重 | < 标准体重×10%）。
已知市斤是公斤的两倍。现给定一群人的身高和实际体重，请你告诉他们是否太胖或太瘦了。

输入格式：
输入第一行给出一个正整数N（≤ 20）。
随后N行，每行给出两个整数，分别是一个人的身高H（120 < H < 200；单位：厘米）
和真实体重W（50 < W ≤ 300；单位：市斤），其间以空格分隔。

输出格式：
为每个人输出一行结论：如果是完美身材，输出You are wan mei!；
如果太胖了，输出You are tai pang le!；否则输出You are tai shou le!。
输入样例：
3
169 136
150 81
178 155
输出样例：
You are wan mei!
You are tai shou le!
You are tai pang le!
*/












#include<stdio.h>
enum STATU {
    good,shou,pang
};
int getStatus(int H,int W);
void showStatus(int status);
int main() {
	int count = 0;
	scanf("%d",&count);
	int H[count],W[count];
	for(int i=0; i<count; i++) {
		scanf("%d",&H[i]);
		scanf("%d",&W[i]);
	}
	for(int i=0; i<count; i++) {
		showStatus(getStatus(H[i],W[i]));
	}
	return 0;
}

int getStatus(int H,int W) {
//	double max = (double)((H-100)*0.9 *1.1*2);
//	double min =  (double)((H-100)*0.9 *0.9*2);
//	printf("min = %.2lf\n",min);
//	printf("max = %.2lf\n",max);
//
//	if(W>=max) {
//		return pang;
//	}
//	if(W<=min) {
//		return shou;
//	}

	double value  = (H-100)*0.9*2;
	value  = (W-value)/value;
	if(value<=-0.10) {
		return shou;
	}
	if(value>=0.10) {
		return pang;
	}
	return good;
}
void showStatus(int status) {
	switch(status) {
		case good:
			printf("You are wan mei!");
			break;
		case shou:
			printf("You are tai shou le!");
			break;
		case pang:
			printf("You are tai pang le!");
			break;
		default :
			break;
	}
	printf("\n");

}
