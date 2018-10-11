#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	long jiecheng=1;
	if(m<0)
	{
		printf("ÊäÈëÓÐÎó\n");
	}else{	
		if(m==0||m==1)
		{
			jiecheng=1;	
			printf("%d",jiecheng);	
		}else{
			
			for(int i=1;i<=m;i++)
			{
				jiecheng*=i;	
			}
			printf("%d",jiecheng);
		}
	}
	
	return 0;
}
