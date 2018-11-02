/*
令 Pi表示第 i 个素数。现任给两个正整数 M≤N≤10^4 ，请输出 Pm到Pn的所有素数。

输入格式：
输入在一行中给出 M 和 N，其间以空格分隔。

输出格式：
输出从 Pm到Pn的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
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
	//输出第n个素数到第m个素数
	//思路：将前面m个素数放到数组中，然后遍历数组[n,m]之间的值
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

