/*

*/
#include<stdio.h>
#include<string.h>
char add(char *s,int number);
int main() {
	int N;
	scanf("%d",&N);
	char *c = "123";

	char *b = add(c,N);
	printf("%s",b);
	return 0;
}
char add(char *s,int number) {
	char s2 = s+number;
	return s2;
}
