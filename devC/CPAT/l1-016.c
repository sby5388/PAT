#include<stdio.h>
#include<string.h> 
//这么久都没有解决int无法包含超多位的整数 
int main()
{
	//445122 19940415 4358:::18位
	int n=0;
	scanf("%d",&n);
	char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
//	printf("n=%d\n",n);
	int shuzu[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
	char c[n][19];
	int sum1[n];
	for(int i=0;i<n;i++)
	{
		sum1[i]=0;
		scanf("%s",&c[i]);
	}
	int o=0;
	
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<17;j++)
		{
			char t=c[i][j];
			if(t=='0') o=0; 
			if(t=='1') o=1; 
			if(t=='2') o=2; 
			if(t=='3') o=3; 
			if(t=='4') o=4; 
			if(t=='5') o=5; 
			if(t=='6') o=6; 
			if(t=='7') o=7; 
			if(t=='8') o=8; 
			if(t=='9') o=9; 
			sum=sum+o*shuzu[j];
		}
		sum1[i]=sum;		
	}
	int count=n;
	for(int i=0;i<n;i++)
	{
		int yu=sum1[i]%11;
		char k=m[yu];
		if(k!=c[i][17])
		{
			printf("%s\n",c[i]);
			count--;	
		} 		 
	}
	if(count==n)
	{
		printf("All passed");
	}
	return 0;
	
} 
