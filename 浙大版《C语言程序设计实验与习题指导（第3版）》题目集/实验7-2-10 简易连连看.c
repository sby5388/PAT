/*
实验7-2-10 简易连连看 （20 分）
本题要求实现一个简易连连看游戏模拟程序。

给定一个2N×2N的方阵网格游戏盘面，每个格子中放置一些符号。
这些符号一定是成对出现的，同一个符号可能不止一对。程序读入玩家给出的一对位置(x1,y1),(x2,y2)，
判断这两个位置上的符号是否匹配。
如果匹配成功，则将两个符号消为“*”并输出消去后的盘面；
否则输出“Uh-oh”。
若匹配错误达到3次，则输出“Game Over”并结束游戏。
或者当全部符号匹配成功，则输出“Congratulations!”，然后结束游戏。

输入格式：
输入在一行中给一个正整数N（<5）。
随后2N行，每行2N个大写英文字母（其间以1个空格分隔），表示游戏盘面。
盘面之后给出一个正整数K，随后K行，每行按照格式“x1 y1 x2 y2 ”给出一个玩家的输入。注意格子的行、列编号是从1到2N。

输出格式：
根据玩家的每一步输入，输出相应的结果。输出盘面时注意，每行字符间以1个空格分隔，行末不得有多余空格。

输入样例1：
2
I T I T
Y T I A
T A T Y
I K K T
11
1 1 1 3
4 2 4 3
3 1 4 2
2 2 1 2
3 1 2 4
4 4 3 1
2 1 3 4
3 3 1 4
4 1 2 3
2 4 3 2
1 1 2 2
输出样例1：
* T * T
Y T I A
T A T Y
I K K T
* T * T
Y T I A
T A T Y
I * * T
Uh-oh
* * * T
Y * I A
T A T Y
I * * T
Uh-oh
* * * T
Y * I A
* A T Y
I * * *
* * * T
* * I A
* A T *
I * * *
* * * *
* * I A
* A * *
I * * *
* * * *
* * * A
* A * *
* * * *
Congratulations!
输入样例2：
2
I T I T
Y T I A
T A T Y
I K K T
5
1 1 4 4
1 1 2 3
1 1 2 3
2 2 4 1
2 2 3 3
输出样例2：
Uh-oh
* T I T
Y T * A
T A T Y
I K K T
Uh-oh
Uh-oh
Game Over
*/
#include<stdio.h>
#define return return
int main() {
	int M;
	scanf("%d",&M);
	if(M<1) {
		return 0;
	}

	int N= 2 * M;
//	printf("int N = %d\n",N);
	char c;
	char table[N][N];
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			c = getchar();
			while(1) {
				if(c!=' '&& c!='\n') {
					table[i][j] = c;
					break;
				}
				c = getchar();
			}
		}
	}
	int maxCount;
	scanf("%d",&maxCount);
	//错误次数
	int errorCount = 0;
	int rightCount = 0;
	int x1=0;
	int y1=0;
	int x2=0;
	int y2=0;
	for(int i=0; i<maxCount; i++) {
		scanf("%d",&x1);
		scanf("%d",&y1);
		scanf("%d",&x2);
		scanf("%d",&y2);
		x1--;
		y1--;
		x2--;
		y2--;
		if(table[x1][y1]==table[x2][y2] && table[x1][y1]!='*' ) {
			table[x1][y1] = '*';
			table[x2][y2] = '*';
			rightCount++;
			if(rightCount!=N*N/2) {
				for(int i=0; i<N; i++) {
					for(int j=0; j<N; j++) {
						if(j==0) {
							printf("%c",table[i][j]);
						} else {
							printf(" %c",table[i][j]);
						}
					}
					printf("\n");
				}
			}
		} else {
			errorCount++;
			printf("Uh-oh\n");
		}
		if(errorCount>=3||rightCount>=N*N/2) {
			break;
		}
	}

	if(errorCount==3) {
		printf("Game Over\n");
	} else {
		printf("Congratulations!\n");
	}
	return 0;
}

