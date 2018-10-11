#include<stdio.h>
int main() 
{
	int sum1=0;
	for(int i=1;i<26;i++)
	{
		sum1=sum1+i;
	}
	printf("sum1=%d\n",sum1);
	for(int i=1;i<sum1;i++)
	{
		printf("¿ªÊ¼   \n");
		int sum=i;
		printf("sum=%d\n",sum);
	//	scanf("%d",&sum);
		int yu=0;
	//	int sum1=0;
		int count0=0;
		int count1=0;
		while(sum>0)
		{
			yu=sum%2;
	//		printf("yu=%d\n",yu);
			if(yu==0)
			{
				count0++;
			}else
			{
				if(yu==1)
				{
					count1++;
				}
			}
			sum=sum/2;
		}
	//	printf("sum1==%d\n",sum1);
		
		printf("%d %d\n",count0,count1);
	}
	return 0;
}
