#include<stdio.h>
int main()
{
	int n=0,n1;
	scanf("%d",&n1);
	if(n1>0&&n1<100)
	{
		n=n1;
		int shuzu[n];
		int shuzu3[n];
		int shuzu1[100];
		int shuzu2[100];
		for(int i=0;i<100;i++)
		{
			shuzu1[i]=0;
			shuzu2[i]=0;
			
		}
		for(int i=0;i<n;i++)
		{
			shuzu[i]=0;
			scanf("%d",&n1);
			if(n1>1&&n1<=100)
			{
				shuzu[i]=n1;
				shuzu3[i]=n1;;
			}
		} 
		
		for(int i=0;i<n;i++)
		{
			while(shuzu[i]>1)
			{
				if(shuzu1[shuzu[i]]==0)
				{
					shuzu1[shuzu[i]]=1;
					if(shuzu[i]%2==0)
					{
						shuzu[i]=shuzu[i]/2;
						shuzu1[shuzu[i]]=1;
					}
					else
					{
						shuzu[i]=(3*shuzu[i]+1)/2;
						shuzu1[shuzu[i]]=1;
					}
				}else
				{
					shuzu2[shuzu[i]]=1;
					if(shuzu[i]%2==0)
					{
						shuzu[i]=shuzu[i]/2;
						shuzu1[shuzu[i]]=1;
					}
					else
					{
						shuzu[i]=(3*shuzu[i]+1)/2;
						shuzu1[shuzu[i]]=1;
					}
				}
				
			}
		}
		int count=0;
		for(int i=n;i>0;i--)
		{
			if(shuzu2[shuzu3[i]]==1)
			{
				if(count==0)
				{
					printf("%d",i);
					count++;
				}else
				{
					printf(" %d",i);	
				}
			}
		}
		
		
		
	}
}
