/*
ʵ��4-2-3 ��֤����°ͺղ��롱 ��20 �֣�
��ѧ���������ġ���°ͺղ��롱�Ĵ�����˼�ǣ�
�κ�һ������2��ż�����ܱ�ʾΪ��������֮�͡�
���磺24=5+19������5��19����������
��ʵ������������һ��������֤20�����ڵ�ż�������Էֽ����������֮�͡�

�����ʽ��
������һ���и���һ��(2, 2 000 000 000]��Χ�ڵ�ż��N��

�����ʽ��
��һ���а��ո�ʽ��N = p + q�����N�������ֽ⣬����p �� q��Ϊ������
����Ϊ�����ķֽⲻΨһ������24�����Էֽ�Ϊ7+17����Ҫ�����������н���p��С�Ľ⡣

����������
24
���������
24 = 5 + 19
*/
#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main() {
	int m;
	scanf("%d", &m);
	Goldbach(m);

return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int prime( int p ) {
	if(p<2) {
		return 0;
	}
	if(p>3 && 0==(p%2)) {
		return 0;
	}
	int count = 0;
	int min = 1;
	int max = sqrt(p);
	for(int i=min; i<=max; i++) {
		if(0 == p%i) {
			count++;
		}
		if(count>1) {
			return 0;
		}
	}
	return 1;

}
void Goldbach( int n ) {
	int temp;
	for(int i=2; i<n; i++) {
		if(prime(i)) {
			temp = n-i;
			if(prime(temp)) {
				printf("%d = %d + %d",n,i,temp);
				break;
			}
		}
	}
}
