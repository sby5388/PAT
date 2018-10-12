#include<stdio.h>
#include<string.h>
//出错了，没有考虑到int对应的最大的整数只有8位
//而测试的数据要求是50位以内的，所以暂时不行 
int main() 
{
			char c[51];
			scanf("%s",&c);
			int k=strlen(c);
		//	printf("k=%d\n",k);
			int count2=0;//2的个数
			double fushu=1.0;
			double oushu=1.0;
			double jieguo=1.0;
			int k1=k;
			if(c[0]=='-')//判断是否是负数 
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
