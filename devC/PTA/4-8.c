#include <stdio.h>
int Factorial( const int N );
//Çó½×³Ë 
int main()
{
    int N, NF;				
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}
int Factorial(const int N)
{
	int k=1;
	if (N<0)
	{
		k=0;
	}
	if(N==0||N>12)
	{
		k=1;
	}
	if(N>0&&N<=12)
	{
		for(int i=1;i<=N;i++)
		{
			k*=i;
		}
	}
//	printf("k=%d",k);
	return k;
} 
