#include<stdio.h>
//Ӧ��ʹ����������ʾ������ :��֪��λ�������ʺ� 
int main()
{
//	D���Ƶ�A+B 
	long a=0,b=0;
	int c=1;
	scanf("%ld %ld %d",&a,&b,&c);
	
	long sum1 = a + b ;//�� 
	int d=0;
	long sum2 = sum1;
	while(sum2>c){
		d =d*10 + sum2 % c;
		sum2=sum2 /c;
		
	} 
	d=d*10 + sum2;
	//ȡ������
	int d1=0;
	while(d>0){
		d1 = d1*10 + d%10;
		d = d/10;
	} 
	printf("%d\n",d1);
	
	return 0;
} 
