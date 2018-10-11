#include <stdio.h>
int main()
{
	int a=0,b=0,c=0;
	int x=0;
	
	//ee						printf("请输入一个三位数x\n") ;
	scanf("%d",&x);
	 a = x / 100;
	 b =x / 10 %10;
	 c= x % 10;
	 
	printf("%d",c*100+b*10+a);
	 
	 return 0;
	
	
//	if(c==0)
//	 {
//	 	if(b==0)
//		 {
//	 			printf("%d",a);
//		 }
//		 else
//		 {
//		 	printf("%d%d%",b,a);
//		 }
//	 }else
//	 {
//	
//	int prince = 0;
//	printf("请输入工资\n");
//	scanf("%d",&prince);
//	int yuer = 100 - prince; 
//	printf("%d",yuer);
//	return 0;


////计算时间差 
//    int hour1=0;
//    int hour2=0;
//    int hour3=0;
//    int minu1=0;
//    int minu2=0;
//    int minu3=0;
//    
//    printf("请输入时间1\n");
//    scanf("%d %d",&hour1,&minu1);
//    printf("请输入时间2\n");
//    scanf("%d %d",&hour2,&minu2);
//    int tt1 = hour1 * 60 + minu1;
//    int tt2 = hour2 * 60 + minu2;
//    int tt3 = tt1 - tt2; 
//    hour3 = tt3/60;
//    minu3 = tt3%60;
//	printf("时间差是 %d 时 %d 分",hour3,minu3) ;
    
	
 } 
