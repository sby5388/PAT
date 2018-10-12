#include<stdio.h>
int main() 
{
	int n=0,m=0,s=0,d=0;
	int n1=0;
	//n:城市
	//m:快速道路的数量
	//s:出发城市的编号
	//d:目的城市的编号
	scanf("%d %d %d %d",&n1,&m,&s,&d);
	if(n1>=2&&n1<=500)
	{
		n=n1;
		int jiuyuan[n];
		for(int i=0;i<n;i++)
		{
			jiuyuan[i]=0;
			scanf("%d",&jiuyuan[i]);//每个城市的救援队伍数量 
		}
		int shuzu[m][3];
		//初始值 
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<3;j++)
			{
				shuzu[i][j]=0;
			}
		}
		//获取输入 
		// 0：出发城市
		// 1: 到达城市
		// 2: 路径长度 
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
