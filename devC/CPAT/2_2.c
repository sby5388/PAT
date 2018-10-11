#include<stdio.h>
int main()
{
	char c1='*';
	printf("%c\n",c1);
  	int i,j;
  	int n;
  	char c;
 	scanf("%d",&n);
 	getchar();
 	scanf("%c",&c);
  	for(i=1;i<=(int)(n/2.0+0.5);i++)
  	{  
		for(j=1;j<=n;j++)
    	{
      		printf("%c",c);
    	}
 		 printf("\n");
  	}	
	return 0;
 } 
