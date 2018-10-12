#include<stdio.h>
int main()
{
	int min=-3,max=8;
	scanf("%d %d",&min,&max);
	if(min>=-100 && max<=100)
	{
		int count=0;
	//	int count2;
		int sum=0;
	
		for(int i=min;i<=max;i++)
		{
			if(count<4)
			{
				printf("%5d",i);
				count++;
			}else
			{
				printf("%5d\n",i);
				count=0;
			}
		}
		for(int i=min;i<=max;i++)
		{
			sum=sum+i;
		}
		if(count==0)
		{
			printf("Sum = %d",sum);
		}
		else
		{
			printf("\n");
			printf("Sum = %d",sum);
		}	
	}
	return 0;
} 
