#include<stdio.h>
int main()
{
	//没有考虑需求量大于市场所能提供的最大值 
	int n,m;
	scanf("%d %d",&n,&m);
	//n:月饼的种类
	//m:市场对月饼的最大的需求量 
	if(n>0 && n<=500 &&m>0 && m<=1000)
	{
		//错了；kc和sj不一定是整形，只是要求正数而已 
		int m1=m;
		int kc[n];//每种月饼的库存量
		int kc1=0; 
		int  sj[n];//每种月饼的总售价
		double dj[n];//每种月饼的单价	
		for(int i=0;i<n;i++)
		{
			kc[i]=0;
			sj[i]=0;
			dj[i]=0.0;
		}	
		for(int i=0;i<n;i++)	
		{
			int kkk=0;
			scanf("%d",&kkk);
			if(kkk>0)
			{
				kc[i]=kkk;
			}
		}
		for(int i=0;i<n;i++)	
		{
			int jjj=0;
			scanf("%d",&jjj);
			if(jjj>0)
			{
				sj[i]=jjj;
				dj[i]=sj[i]*1.0/kc[i];
			}		
		}
		for(int i=0;i<n;i++)	
		{
			kc1=kc1+kc[i];
		}
		if(kc1<m1)
		{
			m1=kc1;
		}
	/*	
		printf("库存量::");
		for(int i=0;i<n;i++)
		{
			printf("%d ",kc[i]);
		}
		printf("\n");
		printf("售价::");
		for(int i=0;i<n;i++)
		{
			printf("%d ",sj[i]);
		}
		printf("\n");
		printf("单价::");
		for(int i=0;i<n;i++)
		{
			printf("%.2f ",dj[i]);
		}
		printf("\n");
		*/
		int min=0;
		double mindj=dj[0];
		for(int i=0;i<n;i++)
		{
			if(dj[i]<mindj)
			{
				mindj=dj[i];
				min=i;
			}
		}
		
		double sum=0.0; 
		//获取最大单价 
	//	printf("最大需求量m1==%d\n",m1);
		while(m1>0)
		{
			int maxi=min;
			double maxdj=mindj;
			//寻找当前的最高单价 
			for(int i=0;i<n;i++)
			{
				int ccc=0;
				if(dj[i]>maxdj)
				{
					maxdj=dj[i];
					maxi=i;
					ccc=1;
				}				
			}
	//		printf("最高的单价：：i=%d  maxdj=%.2f\n",maxi,maxdj);
			dj[maxi]=0;
			if(m1<kc[maxi])
			{
				sum=sum+m1*maxdj;
				m1=0;
	//			printf("需求小于当前库存;当前需求量==%d\n",m1);			
			}
			if(m1==kc[maxi])
			{
				sum=sum+sj[maxi];
				m1=0;
	//			printf("需求等于当前库存;当前需求量==%d\n",m1);
			}					
			if(m1>kc[maxi])
			{
				sum=sum+sj[maxi];
				m1=m1-kc[maxi];
	//			printf("需求大于当前库存;当前需求量==%d\n",m1);									
			}
			
		}
		printf("%.2f\n",sum);
	} 
	return 0; 
}
 
