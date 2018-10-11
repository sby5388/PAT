#include<stdio.h>
int main()
{
	int shuzu[50]={0};
	int cishu =100; 
	int xishu=1;
	do{
		scanf("%d %d",&cishu,&xishu);
		shuzu[cishu]=shuzu[cishu]+xishu;
		
	} while(cishu!=0);//当次数为0时停止键入 
	//printf("shuzu[%d]=%d",xishu,shuzu[cishu]);
	printf("suzhu[0]=%d",shuzu[0]);
	return 0;
}
