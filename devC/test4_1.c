#include <stdio.h>
int tosum(int number);
int main()
{
	int n = 0;
	int m = 0;
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	//printf("n=%d\n",n);
	//printf("m=%d\n",m);
	
	int n1 = tosum(n-1);
	int m1 = tosum(m);
	int k = m1-n1;
	
//	printf("%d\n",n1);
//	printf("%d\n",m1);
	printf("%d\n",k);
	
	return 0;
	
}
int tosum(int number)
{
	int sum= 0;//ǰN�������ĺ� 
	int count1 = 0;
	
	for(int i=2;count1<number;i++) 
	{
		int j =1;
		int count2 = 0;//i�����ظ��� 
		do{
			if(i%j ==0)
			{
				count2++;
			}
		j++;	
		}while(j<=i);
		
		if(count2<=2)
		{
			sum+=i;
			count1++;
		}
	}
	
	
	return sum;
}

