/*
C���Խ��ף�
*P++ ָ�룬������ʲô
*/
#include<stdio.h>
int main() {
	char ac[]= {0,1,2,3,4,5,6,7,8,9};
	char *p = ac;
	//%p :���ָ�����͵ĵ�ַ 
	//2��ֵ ��� 1������Ϊsizeof(char)==1 
	printf("p\t=\t%p\n",p);
	printf("p+1\t=\t%p\n",p+1);
	//
	printf("p[1]\t=\t%d\n",p[1]);
	printf("*(p+1)\t=\t%d\n",*(p+1));
	
	int ai[]= {0,1,2,3,4,5,6,7,8,9};
	int *q = ai;
	//%p :���ָ�����͵ĵ�ַ 
	//2��ֵ ��� 4������Ϊsizeof(int)==4
	printf("q\t=\t%p\n",q);
	printf("q+1\t=\t%p\n",q+1);
	
	
	double af[]= {0,1,2,3,4,5,6,7,8,9};
	double *r= af;
	//%p :���ָ�����͵ĵ�ַ 
	//2��ֵ ��� 4������Ϊsizeof(double)==8
	printf("r\t=\t%p\n",r);
	printf("r+1\t=\t%p\n",r+1);
	

	return 0;
}

