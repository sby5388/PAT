/*
ͨ�����ݵ�ַ���ı������ֵ
&a:�Ա���aȡ��ַ 
*/
#include<stdio.h>
void swap(int *a,int *b);
int main() {
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n",a,b);

	printf("swap(a,b)\n");
	swap(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

