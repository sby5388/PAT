#include <stdio.h>
int Count_Digit (const int N, const int D);
int main()
{
    int N,D;				
    scanf("%d %d",&N,&D);
    printf("%d\n",Count_Digit(N,D));
    return 0;
}
int Count_Digit(const int N, const int D)
{
	int D1=D;
	if(D1>9)
	{
		D1=D1%10;
	}
	int n1;
	int count=0;
	if(N>=0)
	{
		n1=N;
	}else
	{
		n1=-N;
	}
	while(n1>0)
	{
		if(D1==(n1%10))
		{
			count++;
		}
		n1=n1/10;
	}	
	return count;
}
