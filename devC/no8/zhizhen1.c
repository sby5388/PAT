#include<stdio.h>
void f(int *p);
void g(int k); 
int main(void)
{
	int i=6;
	printf("&i=%p\n",&i);//i的地址 
	//指针地址使用"%p"来表示 
	f(&i);
	g(i);
	return 0;
} 
void f(int *p)
{
	printf(" p=%p\n",p);
	printf("*p=%d\n",*p);
	//在定义好"*p=i"后，
	//p==&i;
	//*p==i; 
	*p=26;//通过指针修改i的值
	//此处命令与"i=26"相同 
	//通过指针可以交换两个数的值 
}
void g(int k)
{
	printf("k=%d\n",k);
} 
