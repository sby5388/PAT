#include<stdio.h>
void shuchu(int k);
int main() {
	int n;
	scanf("%d",&n);
	int shuzu[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&shuzu[i]);
	}
	for(int i=0; i<n; i++) {
		shuchu(shuzu[i]);
	}
	return 0;
}
void shuchu(int k) {
	if(k<2) {
		printf("No\n");
	} else {
		int isPrime=1;	//	xÊÇËØÊý
		for (int i=2; i<k; i++ ) {
			if (k%i==0) {
				isPrime=0;
				break;
			}
		}
		if ( isPrime==1 ) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
}
