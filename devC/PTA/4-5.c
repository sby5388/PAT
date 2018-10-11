#include <stdio.h>
#define MAXN 10
typedef float ElementType;
ElementType Max( ElementType S[], int N );//求最大值 
int main ()
{
    ElementType S[MAXN];
    int N, i;
    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}
ElementType Max( ElementType S[], int N )
{
	ElementType max1=S[0];
	for(int i=0;i<N;i++)
	{
		if(S[i]>=max1)
		{
			max1=S[i];
		}
	}
	return max1;
}
