/*
�� Pi��ʾ�� i �����������θ����������� M��N��10^4 ������� Pm��Pn������������

�����ʽ��
������һ���и��� M �� N������Կո�ָ���

�����ʽ��
����� Pm��Pn������������ÿ 10 ������ռ 1 �У�����Կո�ָ�������ĩ�����ж���ո�

����������
5 27
���������
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/
#include<stdio.h>
#include<math.h>
int prime( int p );
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	//�����n����������m������
	//˼·����ǰ��m�������ŵ������У�Ȼ���������[n,m]֮���ֵ
	int shuzu[m];
	int t=0;
	int i;
	shuzu[t] =2;
	do {
		for( i=3; t<m;) {
			if(prime(i)) {
				t++;
				shuzu[t]=i;
			}
			i+=2;
		}

	} while(t<m);

	int count3=0;
	for(int i1=n-1; i1<m; i1++) {
		if(count3==0) {
			printf("%d",shuzu[i1]);
			count3++;
		} else {
			if(count3==9) {
				printf(" %d\n",shuzu[i1]);
				count3=0;
			} else {
				printf(" %d",shuzu[i1]);
				count3++;
			}
		}
	}
	return 0;
}
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

