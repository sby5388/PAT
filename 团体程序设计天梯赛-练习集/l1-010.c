#include<stdio.h>
int main()
{
	//while(1){
	
	int shuzu[3];
	int max=0;
	int mid=0;
	int min=0;
	for(int i=0;i<3;i++)
	{
		shuzu[i]=0;
		scanf("%d",&shuzu[i]);
	}
	max=shuzu[0];
	min=shuzu[0];
	int m1=0;
	int m2=0;
	
	for(int i=0;i<3;i++)
	{
		if(shuzu[i]>=max)
		{
			max=shuzu[i];
			m1=i;
			
		}
		if(shuzu[i]<=min)
		{
			min=shuzu[i];
			m2=i;
		}
	}
	for(int i=0;i<3;i++)
	{
		if(i!=m1&&i!=m2)
		{
			mid=shuzu[i];
		}
	}
	printf("%d->%d->%d\n",min,mid,max);
	
	//}
	return 0;
	
}

