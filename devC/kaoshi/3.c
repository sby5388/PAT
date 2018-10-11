#include<stdio.h>
#include<string.h>
int main()
{
//	int k;
//	for(k=1;k;k++);
//	printf("%d",k);

//	

//	int k=-10<x<0;
	
	
	char s[]="Zhejiang";
	int k=strlen(s);
	printf("%d",k);
	s[strlen(s)/2-1]=0;
	printf("%lu#%s#",strlen(s),s);	
	return 0;
}
