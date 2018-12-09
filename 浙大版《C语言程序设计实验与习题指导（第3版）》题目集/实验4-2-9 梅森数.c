/*
ʵ��4-2-9 ÷ɭ�� ��20 �֣�
����2^n - 1��������Ϊ÷ɭ����Mersenne Number��������2^2 -1 =3��2^3 -1=7����÷ɭ����
1722�꣬˫Ŀʧ������ʿ��ѧ��ʦŷ��֤����2^31 - 1=2147483647��һ��������
���Ƶ�ʱ�����ϡ���֪�����������һ����¼��

����Ҫ���д���򣬶���һ������n��n<20����������в�����
2^n - 1��÷ɭ����

�����ʽ��
������һ���и���������n��n<20����

�����ʽ��
����С�����˳��������в�����2^n -1��÷ɭ����ÿ��һ���������ȫû�У��������None����

����������
6
���������
3
7
31
*/
#include<stdio.h>
#include<math.h>
#define return return
int prime(long p);
int main() {

	int N;
	scanf("%d",&N);
	int count =0;
	for(int i=0; i<=N; i++) {
		long number = (long)(pow(2,i)-1);
		if(prime(number)) {
			count++;
			printf("%ld\n",number);
		}
	}
	if(count==0) {
		printf("None");
	}
	return 0;
}

int prime(long p) {
	if(p<2) {
		return 0;
	}
	if(p>3 && p%2==0) {
		return 0;
	}
	int count = 0;
	long min = 1;
	long max = (int)sqrt(p);
	for(long i=min; i<=max; i++) {
		if(0 == p%i) {
			count++;
		}
		if(count>1) {
			return 0;
		}
	}
	return 1;
}


