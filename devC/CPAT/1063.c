#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b;
	int he;
	int max=1;
	for (int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		he=a*a+b*b;
		if(he>=max)
		{
			max=he;
		}
	
	}
	double max1=sqrt(max);
	
	printf("%.2f",max1);
	return 0;
}
