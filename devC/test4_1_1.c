#include<stdio.h> 
//int a= 44;
int x = 0;
int i = 1;
int count = 0;
void sushu(int a);
int main()
{
	//�ж��Ƿ�������
	//printf("%d\n",a);
	
	scanf("%d",&x);
	sushu(x);
	
	return 0;
	 
}
void sushu(int a)
{
	if(x>=2)
	{
		
		for(i = 1;i<=x;i++)
		{
			if(x%i==0) 
			{
				count++;
				printf("%d\n",i);
			}
		}
		
		if(count>2)
		{
			printf("%d��������\n",x);
			printf("��������count=%d",count);
		}
		else{
			printf("%d������",x);
		}
	}
	else {
		printf("x=%d��������Ҳ���Ǻ���",x);
	}

}
