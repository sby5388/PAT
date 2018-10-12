#include<stdio.h>
#include<string.h>
int main()
{
	//0-1-2-3----9:ÕûÊý  
	//48-49-50-51-----57:ASCIIÂëÖµ 
	char a[2][5];
	int l[2];
	char aa[2]="?";
	for(int i=0;i<2;i++)
	{
		scanf("%s",&a[i]);
		l[i]=strlen(a[i]);
	}
	int a2[2];
	a2[0]=0;
	a2[1]=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<l[i];j++)
		{
			if(a[i][0]=='0')
			{
				a2[i]=0;
				break;	
			}else
			{
				if(a[i][j]>='0' && a[i][j]<='9')
				{
					a2[i]=a2[i]*10+(a[i][j]-'0');
				}else
				{
					a2[i]=0;
					break;
				}
			}
		}
	}
	for(int i=0;i<2;i++)
	{
		if(a2[i]>1000)
		{
			a2[i]=0;
		}
	}
	
	if(a2[0]!=0 && a2[1]!=0)
	{
		printf("%d + %d = %d",a2[0],a2[1],a2[0]+a2[1]);
	}
	if(a2[0]!=0 &&a2[1]==0)
	{
		printf("%d + %s = %s",a2[0],aa,aa);
	}
	if(a2[0]==0 && a2[1]!=0)
	{
		printf("%s + %d = %s",aa,a2[1],aa);
	}
	if(a2[0]==0 && a2[1]==0)
	{
		printf("%s + %s = %s",aa,aa,aa);
	}	
	return 0;
}
