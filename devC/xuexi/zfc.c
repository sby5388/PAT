#include<stdio.h>
#include<stdlib.h>
int main() 
{
	char str[ ]="1005621";
	int k=sizeof(str);
	int shuzu[k];
	for(int i=0;i<k;i++)
	{
		shuzu[i]=(int)atoi(str[i]);
		printf("%d  ",shuzu[i]);
	}
	//for(int i=0;i<k;i++)
	{
		
	}
	return 0;
}

