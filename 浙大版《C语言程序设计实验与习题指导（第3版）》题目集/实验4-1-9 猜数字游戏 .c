/*
ʵ��4-1-9 ��������Ϸ ��15 �֣�
��������Ϸ������Ϸ���������һ��100���ڵ���������
�û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�
����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�
����µ������������
����Ҫ��ͳ�ƲµĴ��������1�β³���������ʾ��Bingo!����
���3�����ڲµ�����������ʾ��Lucky You!����
�������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!����
�������N�ζ�û�вµ�������ʾ��Game Over��������������
����ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ:
�����һ���и�������������100����������
�ֱ�����Ϸ����������������Լ��²��������N��
���ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

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
#define SMALL "Too samll"
#define OVER "Game Over"
#define Guess "Good Guess!"
#define LUCKY "Lucky You!"
#define BINGO "Bingo!"


int guess(const int answer,const int count,const int number,int max);
int main() {
	int answer,max;
	scanf("%d %d",&answer,&max);
	int result=0;
	int number = 0;
	int count =1;
	while(1) {
		scanf("%d",&number);
		if(guess(answer,count,number,max)) {
			break;
		}
		count++;
	}
	return 0;
}
/*
1:����
0:����
*/
int guess(const int answer,const int count,const int number,int max) {
	//���� ֱ�� ��ֹ
	if(number < 0) {
		printf("%s\n",OVER);
		return 1;
	}

	if(answer == number) {

		if(count==1) {
			//�״ξͲ���
			printf("%s",BINGO);
		} else {
			//3�����ڲ���
			if(count<=3) {
				printf("%s",LUCKY);
			} else if(count <= max) {
				printf("%s",Guess);
			} else {
				printf("%s",OVER);
			}
		}
		
		return 1;
	}
	
	//���������δ����
	if(count>=max){
		printf("%s",OVER);
		return 1;
	}

	//��������
	if(number>answer) {
		printf("%s\n",BIG);
	} else {
		printf("%s\n",SMALL);
	}
	return 0;
}


