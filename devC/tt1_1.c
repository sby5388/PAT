#include<stdio.h>
int main(){
//	char ch = -1;
//	printf("%d\n", ch);
//
//	int i;
//	scanf("%d", &i);	
//	i %= 4;
//	printf("%d",i);
//

//	int i,x,y;	
//	i=x=y=0;
//	do {
//		++i;
//		if ( i%2 ) {
//			x+=i, 
//			i++;
//		}
//		y +=i++;
//	} while ( i<=7 );
//	printf("%d %d %d", i, x, y);

//int i=10;
//long long t = sizeof(i++);
//printf("%d", i);

	int j=4;
	for ( int i=j; i<=2*j; i++ ) {
	    switch ( i/j ) {
	    case 0:
	    case 1: printf(¡°*¡±); break;
	    case 2: printf(¡°#¡±);
	    }
	}
	return 0;
} 
