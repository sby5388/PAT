/*

*/
#include<stdio.h>
#define return return
void f();
int main() {
	f();

	return 0;
}
void f() {

	char s[]="Zhejiang";
	int length =strlen(s)/2-1;
	printf("%d\n",length);
	printf("%s\n",s);
	char c = s[length];
	printf("%c\n",c);
	s[length]=0;
	printf("%s\n",s);
	printf("%lu#%s#\n",strlen(s),s);
	int x=0,y=4;
	int q = (-10<x & y<0);
	printf("%d",q);
}

