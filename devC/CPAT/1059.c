#include<stdio.h>
#include<string.h>
int zhishu(int zs)
{
	int r=1;
	int count=0;
	if(zs==1) r=0; 
	else{
		for(int i=2;i<zs;i++){
			if(zs%i==0){
				r=0;
				break;
			}
		}
	}
	return r;
}
int main()
{
	int n;
	int n1;
	scanf("%d",&n1);
	if(n1>0&&n1<=10000)
	{
		n=n1;
		int s1[n];
		int chaxun[n];
		char c1[n][5];
		for(int i=0;i<n;i++){
			s1[i]=0;
			chaxun[i]=0;//是否查询：0未查询，1已查询 
		}
		for(int i=0;i<n;i++){
			scanf("%s",&c1[i]);
		}
		//转化成十进制的逆序数 
		for(int i=0;i<n;i++){
			int sum=0;
			int l=strlen(c1[i]);
			for(int j=0;j<l;j++)
			{
				sum=sum*10+(c1[i][j]-'0');
			}
			s1[i]=sum;
		}		
		///查询部分 
		int m=0;
		scanf("%d",&m);
		int s2[m];
		char c2[m][5];
		for(int i=0;i<m;i++){
			s2[i]=0;
		}
		for(int i=0;i<m;i++){
			scanf("%s",&c2[i]);
		}
		for(int i=0;i<m;i++){
			int sum=0;
			int l=strlen(c2[i]);
			for(int j=0;j<l;j++){
				sum=sum*10+(c2[i][j]-'0');
			}
			s2[i]=sum;
		}
		for(int i=0;i<n;i++)	{
			printf("i=%d,sum=%d\n",i,s1[i]);
		}
		for(int i=0;i<m;i++){
			printf("i=%d,sum=%d\n",i,s2[i]);
		}
		//开始判断
		
		for(int i=0;i<m;i++){
			int zzz=0;
			for(int j=0;j<n;j++){
				if(s2[i]==s1[j]){
					zzz=1;
					if(chaxun[j]==0){					
						if(j==0)	printf("i=%d,j=%d,%s: Mystery Award\n",i,j,c2[i]);
						else{
							if(zhishu(j)==1)	printf("i=%d,j=%d,%s: Minion\n",i,j,c2[i]);
							else	printf("i=%d,j=%d,%s: Chocolate\n",i,j,c2[i]);	
						}
						chaxun[j]=1; 
					}
					else	printf("i=%d,j=%d,%s: Checked\n",i,j,c2[i]);
				}
			}
			if(zzz==0)	printf("i=%d,%s: Are you kidding?\n",i,c2[i]);			
		} 			
	}
	return 0;
}
