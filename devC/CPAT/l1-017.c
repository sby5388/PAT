#include<stdio.h>
#include<string.h>
//�����ˣ�û�п��ǵ�int��Ӧ����������ֻ��8λ
//�����Ե�����Ҫ����50λ���ڵģ�������ʱ���� 
int main() 
{
			char c[51];
			scanf("%s",&c);
			int k=strlen(c);
		//	printf("k=%d\n",k);
			int count2=0;//2�ĸ���
			double fushu=1.0;
			double oushu=1.0;
			double jieguo=1.0;
			int k1=k;
			if(c[0]=='-')//�ж��Ƿ��Ǹ��� 
			{
				fushu=1.5; 
				k1--;
			}
			
			if(c[k-1]=='0'||c[k-1]=='2'||c[k-1]=='4'||c[k-1]=='6'||c[k-1]=='8')
			{
				oushu=2.0;
			}
			
			for(int i=0;i<k;i++)
			{
				if(c[i]=='2')
				{
					count2++;
				}
			}
			jieguo=count2*1.0/k1*oushu*fushu*100;
			printf("%.2f%%",jieguo);

	return 0;
}
