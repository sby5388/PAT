#include <stdio.h>

int jiecheng(int x)
{
//	printf("x=%d\n",x);
	int k =1;
	for(int i = 0;i<x-1;i++)
	{		
		k = 2*k;
	//	printf("k=%d\n",k);
	}
//	printf("k=%d\n",k);
	return k;
} 

int main()
{
//	printf("%d",1%2); 
	int number = 0;
	int countt = 0;
	
	scanf("%d",&number);
	int number1 = number;
	int  weishu = 0; 
	int sum = 0;
	int f =0; 
	int t=0; 
//	printf("%d",number);
	
	if(number1>=0)//�ж����ֵ�λ�� 
	{
		do{
			weishu = number1%10;
			countt++;
			
			if((weishu-countt)% 2== 0){  //��ͬ 	
				f =jiecheng(countt); 	
				t =  f*((weishu-countt)%2 + 1);	
				//sum += jiecheng(countt);
				//sum��ֵ�뵱ǰ��β��û�й�ϵ 
				sum +=t;
			//	printf("sum=%d\n",sum);
			}
			
			number1 = number1/10;
		  
			//printf("number1=%d\n",number1);
			
		}while(number1>0);
		//printf("%d",countt);
//  	printf("sum=%d\n",sum);
	printf("%d\n",sum);
	}
	
	//����������Ԥ�ڽ��
	/*
	����   ���(sum) 
	1 		1
	9		1
	10      0
	11		1
	12      0
	20      2
	21      3
	100     4
	*/ 
	
	
	
	
	
	return  0;
}

