/*
��Ŀ���ݣ�
������Ϊ2�ǵ�һ��������3�ǵڶ���������5�ǵ������������������ơ�
���ڣ�������������n��m��0<n<=m<=200����ĳ���Ҫ�����n����������m������֮�����е������ĺͣ�������n�������͵�m��������

�����ʽ:
������������һ����ʾn���ڶ�����ʾm��

�����ʽ��
һ����������ʾ��n����������m������֮�����е������ĺͣ�������n�������͵�m��������

����������
2 4
���������
15

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/
#include<stdio.h>
int prime(int p);
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int primes[m];
//	for(int i=0; i<m; i++) {
//		primes[i] = 0;
//	}
	int count  = 0;
	int i = 2;
	while(1) {
		if(prime(i)) {
			primes[count] = i;
			count++;
			if(count==m) {
				break;
			}
		}
		i++;
	}
	int sum = 0;
	for(int i=n-1; i<m; i++) {
		//printf("%d %d\n",i,primes[i]);
		sum+=primes[i];
	}
	printf("%d",sum);

	return 0;
}
int prime(int p) {
	if(p<2) {
		return 0;
	}
	if(p>3 && p%2==0) {
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

