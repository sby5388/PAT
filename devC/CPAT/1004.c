#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int min=0,max=0;
	int min1=0,max1=0;
	scanf("%d",&n);
	char name[n][11];
	char xuehao[n][11];
	int chengji[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d",&name[i],&xuehao[i],&chengji[i]);
	}
		min1=chengji[0];
		max1=chengji[0];
	for(int i=0;i<n;i++)
	{	
		if(chengji[i]<=min1)
		{
			min1=chengji[i];
			min=i;
		} 
		if(chengji[i]>=max1)
		{
			max1=chengji[i];
			max=i;
		}
	}
	printf("%s %s\n",name[max],xuehao[max]);
	printf("%s %s\n",name[min],xuehao[min]);
//	for(int i=0;i<n;i++)
//	{
//		printf("%s\n",xuehao[i]);
//	}
	return 0;
}
