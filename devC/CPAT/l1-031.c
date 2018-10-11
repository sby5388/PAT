#include<stdio.h>
void shuchu(int s,int t);
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=20)
	{	
		int tizhong[n];
		int shengao[n];
		int tz;
		int sg;
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&sg,&tz);
			if((sg>120&&sg<200)&&(tz>50&&tz<=300))
			{
				shengao[i]=sg;
				tizhong[i]=tz;
			}
		}
		for(int i=0;i<n;i++)
		{
			shuchu(shengao[i],tizhong[i]);
		}
		
	
	}	
	return 0;
}
void shuchu(int s,int t)
{
	double biaozhun=(s-100)*1.8;
	double chazhi=biaozhun-t;
	double chazhi1=chazhi;
	if(chazhi<0)
	{
		chazhi=0-chazhi;
	}
	biaozhun=biaozhun*0.1;
	if(chazhi<biaozhun)
	{
		printf("You are wan mei!\n");
	}
	else
	{
		if(chazhi1<0)
		{
			printf("You are tai pang le!\n");
		}else
		{
			if(chazhi1>0)
			{
				printf("You are tai shou le!\n");
			}
		}
	}
}
