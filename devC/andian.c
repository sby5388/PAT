#include<stdio.h>
//Ѱ�Ұ��� 
//int findmaxi(int x);//Ѱ��ÿһ�е����ֵ 
//int findminj(int x);//Ѱ��ÿһ�е���Сֵ 
int main()
{
	//���� 
	int n =0;
	
	//��ȡ���� 
	scanf("%d",&n);
	
	int shuzu[n][n];
	int i,j,maxi,minj,i2,j2;
	//������ݵ����벢���õ���Ӧ��λ�� 
	for(int i1 =0;i1<n;i1++)
	{
		for(int j1=0;j1<n;j1++)
		{
			scanf("%d",&shuzu[i1][j1]);
		}
	}
	
	//�����ֵ 
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				maxi=shuzu[i][0];
				if(shuzu[i][j]>maxi)
				{
					maxi = shuzu[i][j];
					j2=j;
					i2=i;
				}	
				for(int k=0;k<n;k++)
				{
					minj=shuzu[i2][j2];
					if(shuzu[k][j2]>minj)
					{						
					printf("%d %d\n",i2,j2);	
					}
				}		
			}				
		
			
			
		}
	} 
	
	

	
	return 0;	
} 


