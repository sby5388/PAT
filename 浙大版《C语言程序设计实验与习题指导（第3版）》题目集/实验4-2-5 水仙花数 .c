/*
ʵ��4-2-5 ˮ�ɻ��� ��20 �֣�
ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������
���磺153=1^3 + 5^3 + 3^3��
����Ҫ���д����,��������Nλˮ�ɻ�����

�����ʽ:
������һ���и���һ��������N��3��N��7����

�����ʽ:
������˳���������Nλˮ�ɻ�����ÿ������ռһ�С�

��������:
3
�������:
153
370
371
407
*/
#include<stdio.h>
#include<math.h>
#define return return
int narcissistic(int number);
int getResult(int number,int N);
int main() {
	int N;
	scanf("%d",&N);
	for(int i=pow(10,N-1);i<pow(10,N);i++){
		if(narcissistic(i)){
			printf("%d\n",i);
		}
	}

	return 0;
}
/**
1:��
0������
*/
int narcissistic(int number) {
	int number2 = number;
	int count = 0;
	int sum = 0;
	while(number2>0) {
		count++;
		number2 = number2 /10;
	}
	number2 = number;
	while(number2>0) {
		int temp  = number2%10;
		sum += getResult(temp,count);
		number2 = number2 /10;
		if(sum>number) {
			break;
		}
	}
	if(sum==number) {
		return 1;
	}
	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int getResult(int number,int N) {
	int result = 1;
	while(N>0) {
		result *= number;
		N--;
	}
	return result;
}
