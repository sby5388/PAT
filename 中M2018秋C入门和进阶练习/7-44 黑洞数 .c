/*
�ڶ���Ҳ��Ϊ���������ֳơ�Kaprekar���⡱����һ���������ת�����Ե�����

�κ�һ����λ���ֲ�ȫ��ͬ����λ���������޴Ρ��������������ܻ�õ�495��
������õ�495��Ϊ��λ�ڶ�������ν����������������ɸ������������ź���������ȥ���ź����С������6174Ϊ��λ�ڶ�������

���磬����λ��207��

��1���������ã�720 - 27 �� 693��
��2���������ã�963 - 369 �� 594��
��3���������ã�954 - 459 �� 495��
�Ժ��ͣ����495��һ�ڶ����������λ����3������ȫ��ͬ��һ��ת����Ϊ0��

��������һ����λ������̸����������Ĺ��̡�

�����ʽ��
������һ���и���һ����λ����

�����ʽ��
�������¸�ʽ����������Ĺ��̣�

���: �������ź������� - ���ź����С�� = ��ֵ
��Ŵ�1��ʼ��ֱ��495�����ڵȺ��ұ�Ϊֹ��

����������
123
���������
1: 321 - 123 = 198
2: 981 - 189 = 792
3: 972 - 279 = 693
4: 963 - 369 = 594
5: 954 - 459 = 495
*/
#include<stdio.h>
#define answer 495
#define M 3
int getValue(int number,int position);
int main() {
	int number;

	scanf("%d",&number);


	int position =1;
	while((answer-number)!=0 && number!=0 ) {
		number = getValue(number,position);
		position ++;
	}
	return 0;
}

int getValue(int number,int position2) {

	//todo �����λ����3������ȫ��ͬ��һ��ת����Ϊ0��
	int result  = 0;
	int n[M];
	int position = 0;
	while(number>0) {
		n[position]=number%10;
		number=number/10;
		position++;
	}
	for(int i=0; i<M-1; i++) {
		for(int j=i+1; j<M; j++) {
			if(n[j]<n[i]) {
				int temp =n[j];
				n[j]=n[i];
				n[i]=temp;
			}
		}
	}
	int max = n[2];
	int mid =n[1];
	int min =n[0];

	int maxValue = 100*max +10*mid +min;
	int minValue = 100*min+10*mid +max;
	result  = maxValue - minValue;

	printf("%d: %d - %d = %d\n",position2,maxValue,minValue,result);
	if(max == mid || min == mid){
		return 0;
	}

	return result;
}

