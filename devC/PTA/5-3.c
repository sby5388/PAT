#include<stdio.h>
int main()
{
	//�������λ��
	int n=0;
	scanf("%d",&n);
	int n1=0;
	while(n>0)
	{
		n1=n1*10+(n%10);
		n=n/10;
	}
	printf("%d",n1);
	return 0;
}
