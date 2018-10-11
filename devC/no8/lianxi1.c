#include<stdio.h>
#include<stdlib.h>
int main()
{
	//C99 之前采用的“动态内存分配“方法 
	int number;
	int *a; 
	int i;
	printf("请输入数量：");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=number-1;i>=0;i--)//逆序输出 
	{
		printf("%d  ",a[i]);
	} 
	
	free(a);//释放申请的空间，类似于析构函数 //与malloc函数配套使用 
	return 0;
}
