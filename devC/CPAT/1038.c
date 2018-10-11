#include<stdio.h>
int main()
{
	int n,m;
	int n1;
	scanf("%d",&n1);
	if(n1<=100000)
	{
		n=n1;	
		int fs[n];//分数 
		for(int i=0;i<n;i++)
		{
			scanf("%d",&fs[i]);
		}
		scanf("%d",&m);
		int chaxun[m];
		for(int i=0;i<m;i++)
		{
			scanf("%d",&chaxun[i]);
		}//获取输入
		int count2=0;
		for(int i=0;i<m;i++)
		{
			int count=0;			
			for(int j=0;j<n;j++)
		 	{
		 		if(chaxun[i]==fs[j])
				{
				 	count++;
				}
			}
			
			if(count2==0)
			{
				printf("%d",count);
				count2++;
			}else
			{
				printf(" %d",count);
			}
			
		}
	}
	return 0;
}
