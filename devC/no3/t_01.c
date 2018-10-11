#include <stdio.h>
int main()
{
	int chang = 0;
	int kuan = 0;
	int area = 0; 
	printf("输入长：");
	scanf("%d",&chang);
	printf("长为 %d：\n",chang);
	printf("输入宽：");
	scanf("%d",&kuan);
	printf("宽为 %d：\n",kuan);
	area = chang * kuan;
	printf("面积为 %d\n",area);
	return 0;
	
} 
