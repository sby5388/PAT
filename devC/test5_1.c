#include<stdio.h>
int main()
{
	//��߾��ȵ��̣���ǰ��������a/b:a<b����a��b���������� 
	int a = 0;
	int b = 0;
	int shang = 0;//�� 
	int count1 = 200;//С��������λ�� 
	
	scanf("%d/%d",&a,&b);
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
	
	printf("0.");//�̶����֣����С���� 
	int a1=a;
	for(int i=0;i<count1;i++)
	{
		
		a1=a1*10;
		shang = a1/b;
		printf("%d",shang);	
		a1=a1%b;
		if(a1==0)
		{
			i=200;	
		} 
		
	}
	
	
	return 0;
} 
