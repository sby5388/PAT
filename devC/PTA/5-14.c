#include<stdio.h>
int main()
{ 


	int min=-3,max=8;
	scanf("%d %d",&min,&max);
	int count=0;
	int sum=0;
	int i;
	for(i=min;i<=max;i++)
	{
		if(count<4)
		{
			printf("%5d",i);//ÿ������ռ5���ַ���ȣ����Ҷ���
			count++;
			sum+=i;
		}
		else
		{
			printf("%5d\n",i);
			count=0;
			sum+=i;
		}
	}
	if(count!=0)
	{
		printf("\n");
	}
	printf("Sum = %d",sum);
	
	

}
