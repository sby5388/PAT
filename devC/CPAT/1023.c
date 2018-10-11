#include<stdio.h>
int main()
{
	int shuzu[10];
	int n=0;
	int count0=0;
	int count=0;
	for(int i=0;i<10;i++)
	{
		shuzu[i]=0;
	}
	for(int i=0;i<10;i++)
	{
//		printf("%d\n",i);
		scanf("%d",&n);
		shuzu[i]=n;
		if(i==0)
		{
			count0=n;
		}
	}
//	printf("%d",count0);
	for(int i=1;i<10;i++)
	{
		//printf("---i=%d\n",i);
		//printf("---shuzu[i=]%d\n",shuzu[i]);
		while(shuzu[i]>0)
		{
			printf("%d",i);
			if(count==0)
			{
				for(int k=0;k<count0;k++)
				{
					printf("0");
				}
				count++;
			}
			shuzu[i]--;
		}
	}

	
//	scanf()
	return 0;
} 
