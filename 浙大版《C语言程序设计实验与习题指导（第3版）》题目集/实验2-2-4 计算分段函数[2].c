/*
ʵ��2-2-4 ����ֶκ���[2] ��10 �֣�
����ĿҪ��������зֶκ���f(x)��ֵ��
f(x) = x^0.5  ,x>=0ʱ; ---�൱�ڿ����ţ�
f(x) = (x+1)^2 + 2*x + 1/x ,x<0ʱ

ע������ͷ�ļ��а���math.h��������sqrt������ƽ����������pow�������ݡ�

�����ʽ:
������һ���и���ʵ��x��

�����ʽ:
��һ���а���f(x) = result���ĸ�ʽ���������x��result��������λС����

��������1:
10
�������1:
f(10.00) = 3.16
��������2:
-0.5
�������2:
f(-0.50) = -2.75
*/
#include<stdio.h>
#include<math.h>
int main() {
	double N;
	scanf("%lf",&N);
	double result = 0.0;
	if(N>=0) {
		result  = pow(N,0.5);
		//result  = sqrt(N);
	} else {
		result  = pow(N+1,2)+2*N+1/N;
	}
	printf("f(%.2lf) = %.2lf",N,result);
	return 0;
}

