#include<stdio.h>
#include<stdlib.h>
int main()
{
	//C99 ֮ǰ���õġ���̬�ڴ���䡰���� 
	int number;
	int *a; 
	int i;
	printf("������������");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=number-1;i>=0;i--)//������� 
	{
		printf("%d  ",a[i]);
	} 
	
	free(a);//�ͷ�����Ŀռ䣬�������������� //��malloc��������ʹ�� 
	return 0;
}
