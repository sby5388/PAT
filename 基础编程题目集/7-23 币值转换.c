/*
����һ��������λ��������9λ������һ�������ֵ����λΪԪ������ת���ɲ���Ҫ��Ĵ�д���ĸ�ʽ��
��23108Ԫ��ת�����ɡ�������ǪҼ����ơ�Ԫ��
Ϊ�˼��������СдӢ����ĸa-j˳������д����0-9��
��S��B��Q��W��Y�ֱ����ʰ���١�Ǫ�����ڡ�����23108ԪӦ��ת�����Ϊ��cWdQbBai��Ԫ��

�����ʽ��
������һ���и���һ��������9λ�ķǸ�������

�����ʽ��
��һ�������ת����Ľ����ע�⡰�㡱���÷������������ϰ�ߡ�

��������1��
813227345
�������1��
iYbQdBcScWhQdBeSf
��������2��
6900
�������2��
gQjB
*/
#include<stdio.h>
#define YI 100000000
char numbers[10];
char danwei[5];
void initData();
void show(int N);
int main() {
	initData();
	int N;
	scanf("%d",&N);
//	N = 100;
	show(N);

	printf("%c",numbers[0]);
	printf("%c",numbers[9]);
	return 0;
}
void show(int N) {
//	printf("%c",danwei[2]);
	if(N>=YI) {
		printf("%c%c",numbers[N/YI],danwei[4]);
		N = N%YI;
	}

}
void initData() {
	for(int i=0; i<10; i++) {
		numbers[i]=97+i;
	}
	danwei[0]='S';
	danwei[1]='B';
	danwei[2]='Q';
	danwei[3]='W';
	danwei[4]='Y';
}

























