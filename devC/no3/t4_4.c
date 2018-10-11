#include <stdio.h>
int main()
{
	int n ;
	int i ;
	double sum1 =0.0;
	
	//获取x的值
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum1 += 1.0/i;
	}
	
	//输出sum1
	printf("%f\n",sum1);
	//return 0;
		
}  b
