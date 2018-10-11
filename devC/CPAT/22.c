#include<stdio.h>
int main()
{
	int n;
	int jishu=0;
	int oushu=0;
	int m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m%2==0)
		{
			oushu++;
		}
		else
		{
			jishu++;
		}
	}
	printf("%d %d",jishu,oushu);
	
	return 0;
 } 
