/*

*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	long count[N];
	for(int i=0; i<N; i++) {
		scanf("%ld",&count[i]);

	}
	for(int i=0; i<N; i++) {
		printf("%ld",count[i]);

	}


	return 0;
}

