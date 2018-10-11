#include <stdio.h>
#include <math.h>
int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
				
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}
int IsTheNumber (const int N)//平方数、至少有2个数字相同 
{
	int is=0;
	int pf=sqrt(N);
//	printf("pf=%d\n",pf);
	if(pf*pf==N)
	{	
		int weishu=0;
		int n1=N;
		int n2=N;
		do
		{
			n1=n1/10;
			weishu++;
		}while(n1>0);
		int yu[10];
		for(int i=0;i<10;i++)
		{
			yu[i]=0;
		}
		for(int i=0;i<weishu;i++)
		{
			int k=n2%10;
			yu[k]++;
			n2=n2/10;
			if(yu[k]==2)
			{
				is=1;
				break;
			}
		}
		
	}
	return is;
}
