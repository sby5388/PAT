#include<stdio.h>
int zuida(int kk);
int main()
{
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
		int len=2*maxi-1;//���������
		int shuzu[len];
		int len2=len;
		for(int i=0;i<len;i++)
		{
			if(i<=(maxi-1))
			{
				shuzu[i]=len2;
				len2=len2-2;
			}else
			{
				shuzu[i]=shuzu[len-i-1];
			}			
		}
		for(int i=0;i<len;i++)
		{			
			int ling=((len-shuzu[i])/2);
			while(ling>0)
			{
				printf(" ");//����ո� 
				ling--;
			}			
			do{
				printf("%s",c);//���c 
				shuzu[i]--;
			}while(shuzu[i]>0);			
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
