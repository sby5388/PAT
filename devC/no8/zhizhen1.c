#include<stdio.h>
void f(int *p);
void g(int k); 
int main(void)
{
	int i=6;
	printf("&i=%p\n",&i);//i�ĵ�ַ 
	//ָ���ַʹ��"%p"����ʾ 
	f(&i);
	g(i);
	return 0;
} 
void f(int *p)
{
	printf(" p=%p\n",p);
	printf("*p=%d\n",*p);
	//�ڶ����"*p=i"��
	//p==&i;
	//*p==i; 
	*p=26;//ͨ��ָ���޸�i��ֵ
	//�˴�������"i=26"��ͬ 
	//ͨ��ָ����Խ�����������ֵ 
}
void g(int k)
{
	printf("k=%d\n",k);
} 
