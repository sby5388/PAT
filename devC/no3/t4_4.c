#include <stdio.h>
int main()
{
	int n ;
	int i ;
	double sum1 =0.0;
	
	//��ȡx��ֵ
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum1 += 1.0/i;
	}
	
	//���sum1
	printf("%f\n",sum1);
	//return 0;
		
}  b
