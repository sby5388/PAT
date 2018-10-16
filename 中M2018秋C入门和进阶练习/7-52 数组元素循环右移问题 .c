/*

*/
#include<stdio.h>
int main() {
	int N,M;
	scanf("%d %d",&N,&M);
	while(M>=N){
		M-=N;
	}
	int count[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&count[i]);
	}
	int withoutSpace =1;
	for(int i=N-M; i<N; i++) {
		if(withoutSpace) {
			printf("%d",count[i]);
			withoutSpace = 0;
		} else {
			printf(" %d",count[i]);
		}
	}
	for(int i=0; i<N-M; i++) {
		printf(" %d",count[i]);
	}
	return 0;
}

int main0() {
	int N,M;
	scanf("%d %d",&N,&M);
	while(M>=N){
		M-=N;
	}
	int count[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&count[i]);
	}
	int withoutSpace =1;
	for(int i=N-M; i<N; i++) {
		if(withoutSpace) {
			printf("%d",count[i]);
			withoutSpace = 0;
		} else {
			printf(" %d",count[i]);
		}
	}
	for(int i=0; i<N-M; i++) {
		printf(" %d",count[i]);
	}
	return 0;
}

