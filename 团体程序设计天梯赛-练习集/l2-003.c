#include<stdio.h>
int main()
{
	//û�п��������������г������ṩ�����ֵ 
	int n,m;
	scanf("%d %d",&n,&m);
	//n:�±�������
	//m:�г����±������������� 
	if(n>0 && n<=500 &&m>0 && m<=1000)
	{
		//���ˣ�kc��sj��һ�������Σ�ֻ��Ҫ���������� 
		int m1=m;
		int kc[n];//ÿ���±��Ŀ����
		int kc1=0; 
		int  sj[n];//ÿ���±������ۼ�
		double dj[n];//ÿ���±��ĵ���	
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
		printf("�����::");
		for(int i=0;i<n;i++)
		{
			printf("%d ",kc[i]);
		}
		printf("\n");
		printf("�ۼ�::");
		for(int i=0;i<n;i++)
		{
			printf("%d ",sj[i]);
		}
		printf("\n");
		printf("����::");
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
		//��ȡ��󵥼� 
	//	printf("���������m1==%d\n",m1);
		while(m1>0)
		{
			int maxi=min;
			double maxdj=mindj;
			//Ѱ�ҵ�ǰ����ߵ��� 
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
	//		printf("��ߵĵ��ۣ���i=%d  maxdj=%.2f\n",maxi,maxdj);
			dj[maxi]=0;
			if(m1<kc[maxi])
			{
				sum=sum+m1*maxdj;
				m1=0;
	//			printf("����С�ڵ�ǰ���;��ǰ������==%d\n",m1);			
			}
			if(m1==kc[maxi])
			{
				sum=sum+sj[maxi];
				m1=0;
	//			printf("������ڵ�ǰ���;��ǰ������==%d\n",m1);
			}					
			if(m1>kc[maxi])
			{
				sum=sum+sj[maxi];
				m1=m1-kc[maxi];
	//			printf("������ڵ�ǰ���;��ǰ������==%d\n",m1);									
			}
			
		}
		printf("%.2f\n",sum);
	} 
	return 0; 
}
 
