#include <stdio.h>
//判断一个数是否为素数 
int main()
{
	int sum = 0;
	for ( int i=0; i<10; i++ ) {
	    if ( i%2){
	   		 break;	
		} 
	    sum += i;
	}
	printf("%d\n", sum);
	return 0; 
} 
