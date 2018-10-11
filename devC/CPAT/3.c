#include<stdio.h>
//没有考虑到长达1000位的数字输入 
int main() 
{
	int m=0;
	scanf("%d",&m);
	int shuzu[10]={0};
	do{
		int k=m%10;
		shuzu[k]=shuzu[k]+1;
		m=m/10;
	}while(m>0);
	
	for(int i=0;i<9;i++)
	{
		if(shuzu[i]!=0)
		{
			printf("%d:%d\n",i,shuzu[i]);
		}
	}
	
	return 0;
}
