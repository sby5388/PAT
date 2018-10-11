/*

*/
#include<stdio.h>
#include<string.h>
int main() {
	int N;
	scanf("%d",&N);
	int result =0;
	if(N>0) {
		result = 1;
	} else if(N<0) {
		result =-1;
	}

	printf("sign(%d) = %d",N,result);
	return 0;
}

