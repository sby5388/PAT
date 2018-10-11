#include<stdio.h>
int main()
{
	//固定数组测试 
	//实际是7.1的题目 
	 
	/*
	int shuzu[100]={0};
	
	shuzu[6]=4;
	shuzu[5]=-6;
	shuzu[3]=12;
	shuzu[2]=12;
	shuzu[1]=12;
	shuzu[0]=40;
	*/
	
	//问题所在：
	//1、当次数为负数时没做处理；
	//2、当系数为负数时没有将加号变成负号 
	
	int cishu;//次数 
	int xishu;//系数 
	int shuzu[100];
	int count=0;
	int cishumax=1;
	
	//为了方便测试，将数据输入部分变成固定值 
	
	for(int i=0;i<100;i++)
	{
		shuzu[i]=0;
	}	 
	
	do{
		scanf("%d %d",&cishu,&xishu);
		if(cishu<100&&cishu>-1)
		{			
			if(cishu>cishumax)
			{
				cishumax=cishu;
			}
			shuzu[cishu]=shuzu[cishu]+xishu;
		}
		if(cishu==0)
		{
			count++;
			cishumax=0;
		}		
	}while(count<2);
	
	
	
	//遍历数组shuzu[i] 
	//printf("%d\n",shuzu[0]);
	int count1=1;
	for(int i=99;i>-1;i--)
	{
		if(i>1)
		{
			if(shuzu[i]>0)
			{
				if(shuzu[i]==1)
				{
					if(count1==1)
						{
							printf("x%d",i); 
							count1++;
						}
					
					else{
						printf("+x%d",i); 
					}	
				}
				else{
					if(shuzu[i]!=0)
						{
							if(count1==1)
							{
								printf("%dx%d",shuzu[i],i); 
								count1++;
							}
							else{
								printf("+%dx%d",shuzu[i],i); 
							}
						}
				}
			}
			else{
				if(shuzu[i]==1)
				{
					if(count1==1)
						{
							printf("x%d",i); 
							count1++;
						}
					
					else{
						printf("x%d",i); 
					}	
				}
				else{
					if(shuzu[i]!=0)
						{
							if(count1==1)
							{
								printf("%dx%d",shuzu[i],i); 
								count1++;
							}
							else{
								printf("%dx%d",shuzu[i],i); 
							}
						}
				}
			}
			
		}else{
			if(i==1)
			{
				if(count1==1)
				{
					printf("%dx%d",shuzu[i]); 
					count1++;
				}
				else{
					printf("+%dx",shuzu[i]); 
				}
			} else{
				if(i==0)
				{
					printf("+%d",shuzu[i]);
				}
				 
			}
		}
	}
	//printf("\n");
	//通过测试可知，当循环条件是"int k=9;k>0;k--"时，并不会执行到k=0
	//所以应当修改条件是： "int k=9;k>-1;k--"
	/*
	for(int k =9;k>-1;k--)
	{
		printf("%d\n",k);
		if(k==0)
		{
			printf("K=%d\n",k);
		}
	}
	*/
	
//	for(int i=0;i<100;i++)
//	{
//		if(shuzu[i]>0)
//		{
//			printf("%d --",shuzu[i]);
//		}
//		
//	}

	return 0;
}
