#include<stdio.h>
int main() 
{
	//�������ʱ���� 
	int n=0;
	int n1; 
	scanf("%d",&n1);
	if(n1>0&&n1<=100)
	{
		n=n1;
		int fenzi[n];
		int fenmu[n];
		long  m1,m2;//���ӣ���ĸ 
		int ttt=1;
		int sum=0;
		int gbs=1;//��С������
		//��ȡ����
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
		//�����е�һ�������� 
		for(int i=0;i<n;i++)
		{
			if(gbs%fenmu[i]!=0)
			{			
				gbs=gbs*fenmu[i];
			}
		}
		//���ӵĺ� 
		for(int i=0;i<n;i++)
		{
			sum=sum+gbs/fenmu[i]*fenzi[i];
		}
		//sumȡ����ֵ 
		if(sum<0)
		{
			ttt=0;	  //���� 
			sum=-sum; 
		}
		//Ҫ�Թ�����gbs��sum������򻯴���
		for(int i1=2;i1<gbs && i1<sum;i1++)
		{
			while(gbs%i1==0 && sum%i1==0)
			{
				gbs=gbs/i1;
				sum=sum/i1;
			}
		} 
		//printf("%sum==d\n",sum);
		//������� 
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
