#include<stdio.h>
int mi(int m);
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0 && n<=10)
	{
		int k=mi(n);
		printf("2^%d = %d",n,k);
	}
	
	return 0;
} 
int mi(int m)
{
	int mi=1;
	do{
		mi=2*mi;
		m--; 
	}while(m>0);
	return mi;
}
