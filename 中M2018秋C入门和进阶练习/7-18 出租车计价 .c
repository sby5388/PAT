/*
����Ҫ�����ĳ������ͨ���⳵�շѱ�׼��д������г��Ѽ��㡣�����׼���£�

�����Ϊ3����𲽷�10Ԫ��
������̺�10�����ڣ�ÿ����2Ԫ��
����10�������ϵĲ��ּ���50%�Ļؿղ����ѣ���ÿ����3Ԫ��
Ӫ�˹����У���·�輰�˿�Ҫ����ʱͣ���ģ���ÿ5����2Ԫ���գ�����5�������շѣ���
�����ʽ:
������һ���и���������ʻ��̣���λΪ�����ȷ��С�����1λ����ȴ�ʱ�䣨��������λΪ���ӣ�������Կո�ָ���

�����ʽ:
��һ��������˿�Ӧ֧���ĳ��ѣ���λΪԪ��������������룬������Ԫ��

��������1:
2.6 2
�������1:
10
��������2:
5.1 4
�������2:
14
��������3:
12.5 9
�������3:
34
*/
#include<stdio.h>
int getPrice(double length,int time);
int main() {
	double length;
	int time;
	scanf("%lf %d",&length,&time);
	int price  = getPrice(length,time);
	printf("%d",price);
	return 0;
}

int getPrice(double length,int time) {

if(length<=0){
	return 0;
}
	if(length<=3) {
		return 10;
	}
	double sum = 0;
	sum=10+(length-3)*2;
	if(length>10) {
		sum+=(length-10);
	}

	while(time>=5) {
		sum+=2;
		time=time-5;
	}
	int result = (int)sum;
	if((sum-result)>=0.5){
		result++;
	}
	return result;
}

