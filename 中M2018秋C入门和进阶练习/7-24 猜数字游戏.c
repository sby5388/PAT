/*
��������Ϸ������Ϸ���������һ��100���ڵ����������û�����һ����������в²⣬
��Ҫ���д�����Զ���������������ı��������бȽϣ�����ʾ���ˣ���Too big������
����С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�
����µ�����������򡣳���Ҫ��ͳ�ƲµĴ��������1�β³�������
��ʾ��Bingo!�������3�����ڲµ�����������ʾ��Lucky You!����
�������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!����
�������N�ζ�û�вµ�������ʾ��Game Over��������������
����ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ:
�����һ���и�������������100����������
�ֱ�����Ϸ����������������Լ��²��������N�����ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ:
��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������

��������:
58 4
70
50
56
58
60
-2
�������:
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



