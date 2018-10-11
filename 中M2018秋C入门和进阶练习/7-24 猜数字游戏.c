/*
猜数字游戏是令游戏机随机产生一个100以内的正整数，用户输入一个数对其进行猜测，
需要你编写程序自动对其与随机产生的被猜数进行比较，并提示大了（“Too big”），
还是小了（“Too small”），相等表示猜到了。
如果猜到，则结束程序。程序还要求统计猜的次数，如果1次猜出该数，
提示“Bingo!”；如果3次以内猜到该数，则提示“Lucky You!”；
如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”；
如果超过N次都没有猜到，则提示“Game Over”，并结束程序。
如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。

输入格式:
输入第一行中给出两个不超过100的正整数，
分别是游戏机产生的随机数、以及猜测的最大次数N。最后每行给出一个用户的输入，直到出现负数为止。

输出格式:
在一行中输出每次猜测相应的结果，直到输出猜对的结果或“Game Over”则结束。

输入样例:
58 4
70
50
56
58
60
-2
输出样例:
Too big
Too small
Too small
Good Guess!
*/












#include<stdio.h>
#define BIG "Too big"
#define s "Too samll"
#define OVER "Game Over"
#define Guess "Good Guess!"
#define LUCKY "Lucky You!"
#define BINGO "Bingo!"


int guess(const int answer,const int i,const int number,int N);
int main() {
	int answer,N;
	scanf("%d %d",&answer,&N);
	int count[N];
	for(int i=0;i<N;i++){
			scanf("%d",&count[i]);
	}
	int result=0;
	int number = 0;
	for(int i=0; i<N; i++) {
		result = guess(answer,i,count[i],N);
		if(result) {
			break;
		}
	}
	return 0;
}
int guess(const int answer,const int i,const int number,int N) {
	if(number<0) {
		printf("%s",OVER);
		return 1;
	}

	if(answer==number) {
		if(i==0) {
			printf("%s",BINGO);
		} else if(i<3) {
			printf("%s",LUCKY);
		} else {
			printf("%s",Guess);
		}
		return 1;
	}
	if(i==N-1) {
		printf("%s",OVER);
		return 1;
	}

	if(number>answer) {
		printf("%s",BIG);
	} else {
		printf("%s",s);
	}
	return 0;
}



