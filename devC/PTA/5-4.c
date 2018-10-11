#include<stdio.h>
int main()
{
	//BCDΩ‚√‹ 
	int n;
    scanf("%d", &n);
    int n1 = n;
    int y = 0;
    int a=0;
    
    if(n<=153 && n>=0){
    	while(n1>16){
    		a = a*10 +n1/16;	
    		n1 = n1%16;
		}
	}
	a = a*10 +n1;
	printf("%d\n",a);
	
}
