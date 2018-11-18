/*
C语言进阶：
*P++ 指针，发生了什么
*/
#include<stdio.h>
int main() {
	char ac[]= {0,1,2,3,4,5,6,7,8,9};
	char *p = ac;
	//%p :输出指针类型的地址 
	//2个值 相差 1，是因为sizeof(char)==1 
	printf("p\t=\t%p\n",p);
	printf("p+1\t=\t%p\n",p+1);
	//
	printf("p[1]\t=\t%d\n",p[1]);
	printf("*(p+1)\t=\t%d\n",*(p+1));
	
	int ai[]= {0,1,2,3,4,5,6,7,8,9};
	int *q = ai;
	//%p :输出指针类型的地址 
	//2个值 相差 4，是因为sizeof(int)==4
	printf("q\t=\t%p\n",q);
	printf("q+1\t=\t%p\n",q+1);
	
	
	double af[]= {0,1,2,3,4,5,6,7,8,9};
	double *r= af;
	//%p :输出指针类型的地址 
	//2个值 相差 4，是因为sizeof(double)==8
	printf("r\t=\t%p\n",r);
	printf("r+1\t=\t%p\n",r+1);
	

	return 0;
}

