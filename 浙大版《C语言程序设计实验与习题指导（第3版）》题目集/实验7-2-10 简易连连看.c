/*
ʵ��7-2-10 ���������� ��20 �֣�
����Ҫ��ʵ��һ��������������Ϸģ�����

����һ��2N��2N�ķ���������Ϸ���棬ÿ�������з���һЩ���š�
��Щ����һ���ǳɶԳ��ֵģ�ͬһ�����ſ��ܲ�ֹһ�ԡ����������Ҹ�����һ��λ��(x1,y1),(x2,y2)��
�ж�������λ���ϵķ����Ƿ�ƥ�䡣
���ƥ��ɹ���������������Ϊ��*���������ȥ������棻
���������Uh-oh����
��ƥ�����ﵽ3�Σ��������Game Over����������Ϸ��
���ߵ�ȫ������ƥ��ɹ����������Congratulations!����Ȼ�������Ϸ��

�����ʽ��
������һ���и�һ��������N��<5����
���2N�У�ÿ��2N����дӢ����ĸ�������1���ո�ָ�������ʾ��Ϸ���档
����֮�����һ��������K�����K�У�ÿ�а��ո�ʽ��x1 y1 x2 y2 ������һ����ҵ����롣ע����ӵ��С��б���Ǵ�1��2N��

�����ʽ��
������ҵ�ÿһ�����룬�����Ӧ�Ľ�����������ʱע�⣬ÿ���ַ�����1���ո�ָ�����ĩ�����ж���ո�

��������1��
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
�������1��
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
��������2��
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
�������2��
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
	//�������
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

