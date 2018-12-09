/*
i 	x 	y
0	0	0
3	1	2
5	1	6
7	1	12
9	1	20

*/
#include<stdio.h>
int main() {
	int i,x,y;
	i=x=y=0;
	do {
		++i;
		if ( i%2 == 1 ) {
			x+=i;
			i++;
		}
		y +=i++;
	} while ( i<=7 );
	printf("%d %d %d", i, x, y);
	return 0;
}

