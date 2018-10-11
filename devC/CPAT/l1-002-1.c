#include<stdio.h>
int zuida(int kk);
int main()
{
	//这个算法出错了 
	int n=0;
	int n1;
	char c[2];
	scanf("%d %s",&n1,&c);
	if(n1<=1000&&n1>0)
	{
		n=n1;
		int min=0;
		int max=0;
		int maxi=0;
		int yu=0;
		for(int i=1;;i++)
		{
			min=zuida(i);
			max=zuida(i+1);
			if(min<=n && max>n)
			{
				maxi=i;
				yu=n-min;
				break;
			}
		}
		int len=2*maxi-1;//输出的行数
		int ling[len];
		int len2=len;
		for(int i=0;i<len;i++)
		{
			if(i<(maxi-1))
			{
				ling[i]=i;
			}
			if(i>(maxi-1))
			{
			ling[i]=ling[len-i];
			}						
			int cc=(len-ling[i]*2);
			while(ling[i]>0)
			{
				printf(" ");//输出空格 
				ling[i]--;
			}			
			while(cc>0)
			{
				printf("%s",c);//输出c 
				cc--;
			}			
			printf("\n");			
		}
		printf("%d",yu);
	}	 
	return 0; 	
}
int zuida(int kk)
{
	int k1;
	k1=2*kk*kk-1;
	return k1;
}
