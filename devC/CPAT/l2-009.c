#include<stdio.h>
int main()
{
	int n1;//��������
	scanf("%d",&n1);
	if(n1>0 && n1<=10000)
	{
		int n=n1;
		int shouru[10];//�յ��ĺ����Ǯ 
		int zhichu[10];//�����ĺ����Ǯ 
		int hongbao[10];//�յ��ĺ������ 
		int jinqian[10]; //���ĵ�ʧ 
		int zhexing[10];//�Ƿ��Ѿ���� 
		for(int i=0;i<10;i++)//��ʼֵ 
		{
			shouru[i]=0;
			zhichu[i]=0;
			hongbao[i]=0; 
			jinqian[i]=0;
			zhexing[i]=0;
		} 
		//��ȡ���� 
		for(int i=0;i<n;i++)
		{
			int m;
			scanf("%d",&m);
			while(m>0)
			{
				int k1,k2;
				scanf("%d %d",&k1,&k2);
				k1--;
				hongbao[k1]++;
				shouru[k1]+=k2;
				zhichu[i]+=k2;
				m--;
			}
		}
		//printf("���:\n");
		for(int i=0;i<n;i++)
		{
			jinqian[i]=shouru[i]-zhichu[i];
		//	printf("%d ",jinqian[i]);
		}
		//printf("\n");
		int n1=n;
		//��Ҫ���ҳ���С��
		int min=jinqian[0];
		int mini=0; 
		for(int i=0;i<n;i++)
		{
			if(jinqian[i]<=min)
			{
				min=jinqian[i];
				if(i>mini)
				{
					mini=i;
				}
			}
		}
		
		while(n1>1)
		{
			int max=min;
			int maxi=mini;
			for(int i=0;i<n;i++)
			{
				if(zhexing[i]==0)
				{			
					if(jinqian[i]>max)
					{
						max=jinqian[i];
						maxi=i;
					}
					if(jinqian[i]==maxi)
					{
						if(hongbao[i]>hongbao[maxi])
						{
						//	max=jinqian[i];
							maxi=i;
						}
						if(hongbao[i]==hongbao[i])
						{
							if(i<maxi)
							{
							//	max=jinqian[i];
								maxi=i;
							}
							if(i==maxi)
							{
							//	max=jinqian[i];
								maxi=i;
							}
						}
					}
				}
			}
		//	printf("jinqian[maxi]=%d",jinqian[maxi]);
			double d1=jinqian[maxi]*1.0/100;
			printf("%d %.2f\n",maxi+1,d1);
			zhexing[maxi]=1;
			n1--;
		}
		double d2=min*1.0/100;
		printf("%d %.2f\n",mini+1,d2);	
	}
	return 0;
	 
}
