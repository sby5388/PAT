#include<stdio.h>
int main() {
	int n=17;
	n=(n+1)/2;
	int i=1;
	int sum=i;
	do {
		i=i+2;
		sum=i+sum;
	} while(sum<n);
	printf("%d",i);
	return 0;
}
