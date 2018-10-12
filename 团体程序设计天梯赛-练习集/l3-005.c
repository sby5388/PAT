#include<stdio.h>
int main() {
	int n,m,k,s;
	//n:居民点的数量
	//m: 垃圾点的备选数量
	//k:居民点和垃圾箱候选地点之间的道路的条数
	//s:居民点与垃圾箱之间不能超过的最大距离
	int n1,m1,k1,s1;
	scanf("%d %d %d %d",&n1,&m1,&k1,&s1);
	if(n1>0&&n1<=1000&&m1>0&&m1<=10&&k1<=10000&&k1>0&&s1>0) 
	{
		n=n1;
		m=m1;
		k=k1;
		s=s1;
		for(int i=0; i<k; i++) 
		{
			
		}
	}

	return 0;
}
