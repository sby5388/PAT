#include<stdio.h>
int main()
{
	int shuzu[100]={0};
	
	int cishu =99; 
	int xishu=1;//声明幂的次数和系数，对应的一组输入值 
	do{
		scanf("%d %d",&cishu,&xishu);
		shuzu[cishu]=shuzu[cishu]+xishu;
		
	} while(cishu!=0);//当次数为0时停止键入 
	int count=0;
	for(int i=99;i>=0;i--)
	{
		if(shuzu[i]!=0)
		{
		//	printf("%d\n",i);
			if(i>1)
			{
				if(count==0)
				{
					printf("%dx%d",shuzu[i],i);
					count++;
				}else{
				 	printf("+%dx%d",shuzu[i],i);
			
				}
			}
			else{
				if(i==1)
				{
					printf("+%dx",shuzu[i]);
				}
				else{
					
				printf("+%d",shuzu[i]);
				} 
			}
			
		}
			
	} 
	
	return 0;		
} 
