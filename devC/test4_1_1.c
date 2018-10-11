#include<stdio.h> 
//int a= 44;
int x = 0;
int i = 1;
int count = 0;
void sushu(int a);
int main()
{
	//判断是否是素数
	//printf("%d\n",a);
	
	scanf("%d",&x);
	sushu(x);
	
	return 0;
	 
}
void sushu(int a)
{
	if(x>=2)
	{
		
		for(i = 1;i<=x;i++)
		{
			if(x%i==0) 
			{
				count++;
				printf("%d\n",i);
			}
		}
		
		if(count>2)
		{
			printf("%d不是素数\n",x);
			printf("因数个数count=%d",count);
		}
		else{
			printf("%d是素数",x);
		}
	}
	else {
		printf("x=%d不是素数也不是合数",x);
	}

}
