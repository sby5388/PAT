#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	int shuzu[10];
	int count=0;
	for(int i=0;i<10;i++)
	{
		shuzu[i]=0;
	}
	int a=1;
	//do
//	{
		scanf("%s",&ch);
		int n=strlen(ch);
		if(n>0)
		{
			count++;
			if(n<=10)
			{
				shuzu[n-1]++;
			}
		}
		
//	}while(a=1);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",shuzu[i]);
	}
	return 0;
	
}
