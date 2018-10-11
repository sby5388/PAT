#include<stdio.h>
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	if(n>0&&n<=m&&m<=10000)
	//输出第n个素数到第m个素数
	{
		//思路：将前面m个素数放到数组中，然后遍历数组[n,m]之间的值
		int shuzu[m];
		int t=0;
		int i;
		do {
			for( i=2; t<m; i++) {
				int count=0;
				for(int j=1; j<i; j++) {
					if(i%j==0) {
						count++;
					}
					if(count==2) {
						break;
					}
				}
				if(count<2) {
					shuzu[t]=i;
					t++;
				}
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
	}
	return 0;
}
