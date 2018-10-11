#include<stdio.h>
void gongyueshu(int k1,int k2);
int count2=0;
int main()
{
	int a1,a2,b1,b2,c;//a:分子，b:分母 
	scanf("%d/%d %d/%d %d",&a1,&b1,&a2,&b2,&c);
	int gongbeishu=b1*b2;
	a1=a1*b2;
	a2=a2*b1;
	if(a1>a2)
	{
		int a3=a1;
		a1=a2;
		a2=a3;
	}
	double c1=gongbeishu/c;
	for(int i=1;i<c1;i++)
	{
		if((i*c1)>a1 && (i*c1)<a2)
		{
			gongyueshu(i,c);
		}
	}
	return 0;
}
void gongyueshu(int k1,int k2)//k1小于k2 
{
	if(k1<k2)
	{
		int count=0;
		for(int i=1;i<k1;i++)
		{
			if(k1%i==0 && k2%i==0)
			{
				count++;
			}
			if(count>=2)
			{
				break;
			}
		}
		if(count<2)
		{
			if(count2==0)
			{
				printf("%d/%d",k1,k2);
				count2++;
			}
			else
			{
				printf(" %d/%d",k1,k2);
			}
		}
		
		
	}	
}

