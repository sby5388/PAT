#include<stdio.h>
//ʵ���ǣ�7.2Ѱ�Ұ�������⣬����д���ܻ���� 
int main()
{
	int n=4;
	int shuzu[4][4]={{1,7,4,1},
					{4,8,3,6},
					{1,6,1,2},
					{0,7,8,9}};
	int maxi[4]={0};
	int minj[4]={0};
	//Ϊ�˷��㣬n������ʹ�ù̶���ֵ
	/* 
	int n=1;
	scanf("%d",&n);
	int shuzu[n][n];
	//�����������ֵ 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	}
	*/
	//��������ļ����Ƿ���ȷ
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<(n-1))
			{
				printf("%d  ",shuzu[i][j]);
			}else{
				printf("%d\n",shuzu[i][j]);
			}
//			printf("%d  ",shuzu[i][j]);
		}
	}
	
	//����ʼ�����㷨�Ĳ���
	
	for(int i=0;i<n;i++)
	{
		maxi[i]=shuzu[i][0];
		minj[i]=shuzu[0][i]; 
		
		for(int j=0;j<n;j++)
		{
			//�ҵ�ÿ���е����ֵ 
			if(shuzu[i][j]>=maxi[i])
			{
				maxi[i]=shuzu[i][j];
			}
			//�ҵ�ÿ���е���Сֵ 
			if(shuzu[j][i]<=minj[i])
			{
				minj[i]=shuzu[j][i];
			}
		}
	}
	//�������������׼ȷ�� 
	for(int i=0;i<n;i++)
	{
		printf("i=%dʱ��maxi=%d,minj=%d\n",i,maxi[i],minj[i]);
	}
	
	//�Ұ���Ĳ���
	int count2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(maxi[i]==minj[j])
			{
				printf("%d",maxi[i]);
				count2++;
			}
		}	
	}
	if(count2==0)
	{
		printf("NO\n");
	}
	
	
	
	return 0; 
	
}
