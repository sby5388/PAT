/*
ϰ��3-5 �������ж� ��15 �֣�
����ƽ�������������������(x1,y1)��(x2,y2),(x3,y3)���������ܷ񹹳������Ρ�

�����ʽ:
������һ����˳���������[?100,100]��Χ�ڵ����֣��������������x
x1,y1��x2,y2,x3,y3

�����ʽ:
����3���㲻�ܹ��������Σ�����һ���������Impossible���������ԣ�����һ��������������ε��ܳ����������ʽΪ��L = �ܳ�, A = ������������С�����2λ��

��������1:
4 5 6 9 7 8
�������1:
L = 10.13, A = 3.00
��������2:
4 6 8 12 12 18
�������2:
Impossible
*/
#include<stdio.h>
#include<math.h>
double getLenth(double x,double y);
int main() {
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf",&x1);
	scanf("%lf",&y1);
	scanf("%lf",&x2);
	scanf("%lf",&y2);
	scanf("%lf",&x3);
	scanf("%lf",&y3);
	if((x1==x2&& x2==x3)||(y1==y2 && y2==y3)) {
		printf("Impossible");
	} else if((x1-x2)*(y3-y2)==(y1-y2)*(x3-x2)) {
		printf("Impossible");
	} else {
		//ʹ�ú��׹�ʽ
		double l1 =  getLenth(x1-x2,y1-y2);
		double l2 =  getLenth(x1-x3,y1-y3);
		double l3 =  getLenth(x3-x2,y3-y2);
		double L = l1+l2+l3;
		double p = L/2;
		double A = sqrt(p*(p-l1)*(p-l2)*(p-l3));
		printf("L = %.2lf, A = %.2lf",L,A);
	}

	return 0;
}
double getLenth(double x, double y) {
	return sqrt(pow(x,2)+pow(y,2));
}

