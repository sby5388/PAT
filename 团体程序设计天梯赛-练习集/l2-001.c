#include<stdio.h>
int main() 
{
	int n=0,m=0,s=0,d=0;
	int n1=0;
	//n:����
	//m:���ٵ�·������
	//s:�������еı��
	//d:Ŀ�ĳ��еı��
	scanf("%d %d %d %d",&n1,&m,&s,&d);
	if(n1>=2&&n1<=500)
	{
		n=n1;
		int jiuyuan[n];
		for(int i=0;i<n;i++)
		{
			jiuyuan[i]=0;
			scanf("%d",&jiuyuan[i]);//ÿ�����еľ�Ԯ�������� 
		}
		int shuzu[m][3];
		//��ʼֵ 
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<3;j++)
			{
				shuzu[i][j]=0;
			}
		}
		//��ȡ���� 
		// 0����������
		// 1: �������
		// 2: ·������ 
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<3;j++)
			{
				scanf("%d",&shuzu[i][j]);
			}
		}
		int count=0;
		
		
		
		
		
	}
	return 0; 
}
