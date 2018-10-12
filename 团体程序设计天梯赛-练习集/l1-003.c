#include<stdio.h>
#include<string.h>
int main() 
{
	char n[1000];
	scanf("%s",&n);
//	printf("a==%s\n",a);
	int k=strlen(n);
	int shuzu[10];
	for(int i=0;i<10;i++)
	{
		shuzu[i]=0;
	}
	for(int i=0;i<k;i++)
	{
		char t=n[i];
		if(t=='0') shuzu[0]++; 
		if(t=='1') shuzu[1]++; 
		if(t=='2') shuzu[2]++; 
		if(t=='3') shuzu[3]++; 
		if(t=='4') shuzu[4]++; 
		if(t=='5') shuzu[5]++; 
		if(t=='6') shuzu[6]++; 
		if(t=='7') shuzu[7]++; 
		if(t=='8') shuzu[8]++; 
		if(t=='9') shuzu[9]++; 
	}
	for(int i=0;i<10;i++)
	{
		if(shuzu[i]>0)
		{
			printf("%d:%d\n",i,shuzu[i]);
		}
	}
	
	
	return 0;
}
