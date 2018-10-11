#include<stdio.h>
int heshu(int x);//判断一个数x([n,m])是否是合数，再进一步计算 
int sushu(int q);//求一个合数的因数和 
int main()
{
	int n,m;
	scanf("%d %d",&n,&m); 
	int n1=n;
	int m1=m;
	int count1 =0;
	for(int j=n;j<m;j++)
	{
		if(heshu(j))//当j是合数时 
		{
			
			int j1=j;
			int j2=sushu(j);
			
			if(j2==j)
			{
				if(count1<2)
				{				
				printf("%d",j);
				}
				else{
					printf(" ");
					printf("%d",j);
				}
			}
			count1++;
		}		
	}
	if(count1==0)
	{
		printf("NIL\n");
	}
	
	return 0;
}

int sushu(int q)
{
	int sum=0;//因数和 	
	for(int y=1;y<q;y++)
	{
		if(q%y==0)
		{
			sum=sum+y;
		}
	}	
	return sum; 
} 
int heshu(int x)
{
	int isheshu = 0;//0:不是合数，1：合数
	int i;
	int count=0;//非 
	for(i=1;i<x-1;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count>=2)
	{
		isheshu = 1;
	}
	 return isheshu;
} 

