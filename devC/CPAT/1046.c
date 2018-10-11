#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int a1,a2,b1,b2;//ab:¼×ÒÒ£¬12£ºº°»® 
	int counta=0;
	int countb=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		int c=a1+b1;
		if(a2==c&&b2!=c)
		{
			countb++;
		}
		else 
		{
			if(a2!=c&&b2==c)
			{
				counta++;
			}
		}
	} 
	printf("%d %d",counta,countb);
	return 0;
	 
}
