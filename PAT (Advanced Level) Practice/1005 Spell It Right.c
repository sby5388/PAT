/*

*/
#include<stdio.h>
int loop(int t);
void show(int t);
int main() {
	int N;
	scanf("%d",&N);
	int sum=0;
	while(N>0) {
		sum+=N%10;
		N/=10;
	}
	printf("%d",sum);
	show(loop(sum));
	return 0;
}
int loop(int t) {
	int result =0;
	while(t>0) {
		result *=10;
		result+=t%10;
		t/=10;
	}
	return result;
}
void show(int t) {
	char char[]

}

