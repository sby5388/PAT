#include<stdio.h>
#include<string.h>
int main() 
{
	char c[10001];
	scanf("%s",&c);
//	char c[]="pcTclnGloRgLrtLhgljkLhGFauPewSKgt";
	//GPLTGPLTGLTGLGLL
	int len=strlen(c);
//	printf("len=%d\n",len);
	
	//G P L T
	int shuzu[4];
	char c2[4]={'G','P','L','T'};
	for(int i=0;i<4;i++)
	{
		shuzu[i]=0;
	}
	for(int i=0;i<len;i++)
	{
		if(c[i]=='G'||c[i]=='g')
		{
			shuzu[0]++;
		}
		if(c[i]=='P'||c[i]=='p')
		{
			shuzu[1]++;
		}
		if(c[i]=='L'||c[i]=='l')
		{
			shuzu[2]++;
		}
		if(c[i]=='T'||c[i]=='t')
		{
			shuzu[3]++;
		}
	}
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum=sum+shuzu[i];
	}
	while(sum>0)
	{
		for(int i=0;i<4;i++)
		{
			if(shuzu[i]>0)
			{
				printf("%c",c2[i]);
				shuzu[i]--;
				sum--;
			} 
		}	
	}	
	return 0;
}
