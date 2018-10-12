#include<stdio.h>
int main()
{
	int a=0,b=0,n=0;//a:甲；b:乙 ：：：：酒量 
	scanf("%d %d",&a,&b);
	int a3=a;
	int b3=b;
	scanf("%d",&n);//次数 
	int sum=0;
	int a1=0,a2=0,b1=0,b2=0;//1:喊，2：划 
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		sum=a1+b1;
		
			if(sum==a2&&sum!=b2)
			{
				a--;
			//	n--;
			//	printf("a--,a=%d\n",a);
			}
			else
			{
				if(sum!=a2&&sum==b2)
				{
					b--;
			
				}
			}
		
		if(a<0&&b>=0)
		{
			n=0;
			printf("A\n");
			printf("%d",b3-b);
			break;
		}
		else
		{
			if(b<0&&a>=0)
			{
				n=0;
				printf("B\n");
				printf("%d",a3-a);
				break;
			}
		}
		
	}
	
	return 0;
}
