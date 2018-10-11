#include<stdio.h>
#include<string.h>
int main()
{
	char c[100000];
	char s[10][6]={"ling","one","two","three","four","five","six","seven","eight","nine"};
	printf("%s\n",s[1]);
	scanf("%s",&c);
	int len=strlen(c);
	int sum=0;
	for(int i=0;i<len;i++)
	{
		sum+=c[i]-48;
	}
	printf("--%d\n",sum);
	int t=0;
	int sum2=sum;
	do{
		sum2/=10;
		t++;
	}while(sum2>0);
	printf("--t=%d\n",t);
	int shuzu[t];
	for(int i=0;i<t;i++)
	{
		shuzu[i]=0;
		shuzu[i]=sum%10;
		sum=sum/10;
		printf("--shuzu[%d]=%d\n",i,shuzu[i]);
	}
	printf("--%d\n",sum);
	
	int oo=1;
	for(int i=t;i>=0;i--)
	{
		int k=shuzu[i];
		if(oo)
		{
			int k=shuzu[i];
			printf("%s",s[k]);
			oo=0;
		}}
//		}else
//		{
//			printf(" %s",s[k]);
//		}
//	}
	
	printf("--%d\n",sum);
	return 0;
}
