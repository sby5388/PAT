#include<stdio.h>
int main()
{
	//�̶�������� 
	//ʵ����7.1����Ŀ 
	 
	/*
	int shuzu[100]={0};
	
	shuzu[6]=4;
	shuzu[5]=-6;
	shuzu[3]=12;
	shuzu[2]=12;
	shuzu[1]=12;
	shuzu[0]=40;
	*/
	
	//�������ڣ�
	//1��������Ϊ����ʱû������
	//2����ϵ��Ϊ����ʱû�н��Ӻű�ɸ��� 
	
	int cishu;//���� 
	int xishu;//ϵ�� 
	int shuzu[100];
	int count=0;
	int cishumax=1;
	
	//Ϊ�˷�����ԣ����������벿�ֱ�ɹ̶�ֵ 
	
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
	
	
	
	//��������shuzu[i] 
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
	//ͨ�����Կ�֪����ѭ��������"int k=9;k>0;k--"ʱ��������ִ�е�k=0
	//����Ӧ���޸������ǣ� "int k=9;k>-1;k--"
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
