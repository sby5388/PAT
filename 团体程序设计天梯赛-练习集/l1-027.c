#include<stdio.h>
#include<string.h>
int main()
{
	char c[12]="18013820100";
//	char c[12];
//	scanf("%s",&c);
	int k=strlen(c);
	int shuzu[10];
	for(int i=0;i<10;i++)
	{
		shuzu[i]=0;
	} 
	int shouji[k];
	for(int i=0;i<k;i++)
	{
		char t=c[i];
		int t1=t-'0';
		shuzu[t1]++;
		shouji[i]=t1;
	}
	int k1=0;
	for(int i=0;i<10;i++)
	{
		if(shuzu[i]>0)
		{
			k1++;
		}
	}
	int arr[k1];
	for(int i=0;i<k1;i++)
	{
		arr[i]=0;
	} 
	int kk1=0;
	for(int i=9;i>0;i--)
	{
		
		if(shuzu[i]>0)
		{
			arr[kk1]=i;
			kk1++;
		}
	}
	int c1=0;
	int c2=0;
	printf("int[] arr = new int[]{");
	for(int i=0;i<k1;i++)
	{
		if(c1==0)
		{
			printf("%d",arr[i]);
			c1++;
		}else
		{
			printf(",%d",arr[i]);
		}
	}
	printf("};\n"); 
	
	
	int index[k];
	for(int i=0;i<k;i++)
	{
		index[i]=0;
	}
	for(int i=0;i<k;i++)
	{
		int t=shouji[i];
		for(int j=0;j<k1;j++)
		{
			if(arr[j]==t)
			{
				index[i]=j;
			}
		}
	}
	printf("int[] index = new int[]{");
	for(int i=0;i<k;i++)
	{
		if(c2==0)
		{
			printf("%d",index[i]);
			c2++;
		}else
		{
			printf(",%d",index[i]);
		}	
	}
	printf("};");
	return 0;
}
