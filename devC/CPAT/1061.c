#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int n2=n+2;
	int shuzu[n2][m];
	for(int i=0;i<n2;i++)//��ʼֵ 
	{
		for(int j=0;j<m;j++)
		{
			shuzu[i][j]=0;
		}
	}
	//��ȡ��������
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	} 
	//���
	for(int i=2;i<n2;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			if(shuzu[i][j]==shuzu[1][j])
			{
				sum=sum+shuzu[0][j];
			}
		}
		printf("%d\n",sum);
	} 
	return 0;
}
