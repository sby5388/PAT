#include<stdio.h>
#include<math.h>
int main()
{
	//�ж��Ƿ�Ϊ2������ƽ�� �ĺ�
	int n;
	scanf("%d",&n);
	int count = 0;
	if(n > 0 && n <= 10000)
	{
		int max = sqrt(n);	
		for(int i = 1; i <= max; i++)
		{
			for(int j = i; j <= max; j++)
			{
				if(i*i + j*j == n)
				{
					printf("%d %d\n",i,j);
					count = 1;
				}
			}
		}
		
		if(count == 0)
		{
			printf("No Solution");
		}
	}
	
	return 0;
}
