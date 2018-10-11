#include<stdio.h>
#include<string.h>
int main()
{
	char danci[100];
	int changdu[100]={0};
	int i=-1;
	
	scanf("%s",danci);	//%s 
	do{
		i++;
		changdu[i]=strlen(danci);
//		printf("%d",changdu[0]);
		
		scanf("%s",danci);	
	}while(i<2); 
	
	for(int k=0;k<=i;k++)
	{
		printf("%d\n",changdu[k]);
	}
	return 0;
}

