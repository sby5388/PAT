#include<stdio.h>
int sushu(int x); 
int main()
//对合数进行分解质因数 
{
	int  heshu = 1;
	scanf("%d",&heshu);
	int heshu1 = heshu;
	printf("%d=",heshu1);
	int count1 = 0;
	for(int i=2;i<=heshu1;i++)
	{		
	//	int sushu1 = sushu(i);
	//	if(sushu1==1)
		if(sushu(i))
		{			
			while(heshu1%i ==0)
			{
				if(count1==0)
				{					
					printf("%d",i);
				}else{
					printf("x%d",i);
				}				
				heshu1=heshu1/i;
				count1++;	
			}
		} 		
	}
			
	return 0;
} 
int sushu(int x)
{
	int issushu = 1;//1是素数，0不是素数 
	int q;
	for(q=2;q<x;q++)
	{
		if(x%q == 0)
		{
			issushu = 0;
			break;
		}		
	}
	return issushu;	
}

