/*

*/
#include<stdio.h>
void test1() {
	int i,x,y;
	i=x=y=0;
	do {
		++i;
		if ( i%2 ) {
			x+=i;
			i++;
		}
		y +=i++;
	} while ( i<=7 );
	printf("%d %d %d", i, x, y);
}
int main() {
	test1();
	return 0;
}

