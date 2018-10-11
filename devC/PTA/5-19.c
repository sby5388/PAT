#include<stdio.h>
int main()
{
	/*
	一个采购员去银行兑换一张y元f分的支票，结果出纳员错给了f元y分。
	采购员用去了n分之后才发觉有错，于是清点了余额尚有2y元2f分，
	问该支票面额是多少？
	输入格式：输入在一行中给出小于100的正整数n。
	输出格式：在一行中按格式y.f输出该支票的原始面额。如果无解，则输出No Solution。
	输入样例1：23
	输出样例1：25.51
	*/
	int n=0;
	scanf("%d",&n);
	int y=0;
	int f=0;
	/*
		本来：100y+f
		变成：100f+y
		消费过程：100f+y - n = 200y + 2f; 
			98f-n=199y;
				n=98y - 199f;
				y、f都是整数
					f<100; 
		求  y 和 f.
		 
	*/
	int  kk=0;
	for(y=0;y<99;y++)
	{
		for(f=0;f<99;f++)
		{
			if(n==98*y - 199 *f)
			{
				printf("%d.%d",f,y);
				kk=1;
				break;
			}
		}
	}
	if(kk==0)
	{
		printf("No Solution");
	}
	return 0;
}
