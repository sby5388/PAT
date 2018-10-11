#include<stdio.h>
int main()
{
	//求高精度的商：当前仅是由于a/b:a<b，且a、b都是正整数 
	int a = 0;
	int b = 0;
	int shang = 0;//商 
	int count1 = 200;//小数点后面的位数 
	
	scanf("%d/%d",&a,&b);
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
	
	printf("0.");//固定部分：零和小数点 
	int a1=a;
	for(int i=0;i<count1;i++)
	{
		
		a1=a1*10;
		shang = a1/b;
		printf("%d",shang);	
		a1=a1%b;
		if(a1==0)
		{
			i=200;	
		} 
		
	}
	
	
	return 0;
} 
