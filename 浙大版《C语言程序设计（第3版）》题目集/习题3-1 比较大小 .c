/*
ϰ��3-1 �Ƚϴ�С ��10 �֣�
����Ҫ�����������3��������С���������

�����ʽ:
������һ���и���3������������Կո�ָ���

�����ʽ:
��һ���н�3��������С�������������ԡ�->��������

��������:
4 2 8
�������:
2->4->8
*/
#include<stdio.h>
void swap(int *a,int *b);
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) {
		swap(&a,&b);
	}
	if(b>c){
		swap(&b,&c);
	}
	if(a>b) {
		swap(&a,&b);
	}
	printf("%d->%d->%d",a,b,c);

	return 0;
}
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

