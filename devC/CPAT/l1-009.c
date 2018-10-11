#include<stdio.h>
int main() 
{
	//负数相加时出错 
	int n=0;
	int n1; 
	scanf("%d",&n1);
	if(n1>0&&n1<=100)
	{
		n=n1;
		int fenzi[n];
		int fenmu[n];
		long  m1,m2;//分子，分母 
		int ttt=1;
		int sum=0;
		int gbs=1;//最小公倍数
		//获取输入
		for(int i=0;i<n;i++) 
		{
			fenzi[i]=0;
			fenmu[i]=0;
			scanf("%d/%d",&m1,&m2);
			{
				if(m2==0||m1==0)
				{
					fenzi[i]=0;
					fenmu[i]=1;
				}
				else
				{
					fenzi[i]=m1;
					fenmu[i]=m2;	
				}
			}			
		} 
		//算其中的一个公倍数 
		for(int i=0;i<n;i++)
		{
			if(gbs%fenmu[i]!=0)
			{			
				gbs=gbs*fenmu[i];
			}
		}
		//分子的和 
		for(int i=0;i<n;i++)
		{
			sum=sum+gbs/fenmu[i]*fenzi[i];
		}
		//sum取绝对值 
		if(sum<0)
		{
			ttt=0;	  //负数 
			sum=-sum; 
		}
		//要对公倍数gbs与sum进行最简化处理
		for(int i1=2;i1<gbs && i1<sum;i1++)
		{
			while(gbs%i1==0 && sum%i1==0)
			{
				gbs=gbs/i1;
				sum=sum/i1;
			}
		} 
		//printf("%sum==d\n",sum);
		//输出部分 
		if(sum==0)
		{
			printf("0");
		}
		else
		{		
			if(ttt==0)
			{
				printf("-");	
			} 		
			if(sum>=gbs)
			{
				printf("%d",sum/gbs);
				if(sum%gbs>0)
				{
					printf(" %d/%d",sum%gbs,gbs);
				}	
			}else
			{
				printf("%d/%d",sum,gbs);
			}
		}
	}
	return 0;
}
