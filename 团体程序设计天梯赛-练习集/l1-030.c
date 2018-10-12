#include<stdio.h>
#include<string.h>
int main() 
{
	int n;
	scanf("%d",&n);
	//int n1=n/2;
	int sex[n];//0:Å®£»1:ÄÐ 
	int name[n][8];
	for(int i=0;i<n;i++)
	{
		sex[i]=0;
		scanf("%d %s",&sex[i],&name[i]); 
	}
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>0;j--)
		{
			if(sex[i]==1)
			{
				if(sex[j]==0)
				{
					printf("%s %s\n",name[i],name[j]);
					sex[j]=2;
					sex[i]=2;
					break;
		 	}
			}else
			{
				if(sex[i]==0)
				{
					if(sex[j]==1)
					{
						printf("%s %s\n",name[i],name[j]);
						sex[j]=2;
						sex[i]=2;
						break;
					}
				}
			}
		}
	}
	
	return 0;
}
