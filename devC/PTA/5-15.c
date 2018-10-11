#include<stdio.h>
double getfz(int i2);
double getfm(int i4); 
double getmi(int i3);
double fazhi(int i1);	 
int main()
{
	//计算圆周率 
	double d =0.0;
	int  i = 0;
	scanf("%lf",&d);//lf:获取double的类型输入 
//	double fzb = fazhi(2);
//	printf("%f",fzb);
//	printf("%f",d);//输出都出错了 
	int boolean =1;
	while(boolean==1){
		double k=0;
		k = fazhi(i);
		if(k<d){
			boolean  = 0;
//			printf("%d",i) ;
		}else{
			i++;
		}
	}
	
	double shuchu = 0.0;
	for(int i5=0;i5<=i;i5++){
		shuchu  = shuchu+ fazhi(i5);
	}
	shuchu =shuchu*2;
	printf("%f",shuchu) ;
	return 0; 
}
//阀值大小 :正确 
double fazhi(int i1){
	double fza = getfz(i1);
	double fma = getfm(i1);
	double fazhia = fza/fma;
	return fazhia;
}
//获取分子 ：正确 
double getfz(int i2){
	return getmi(i2);
	
}
//获取幂：正确 
double getmi(int i3){
	double mi =1;
	while(i3>=1){
		mi = mi * i3;
		i3--;
	}
	return mi;
} 
//获取分母  ：正确 
double getfm(int i4){
	double fm =1.0; 
	if(i4==0){
		return 1;
	}if(i4==1){
		return 3;
	}else
	{
		i4=i4+1;
		int i41 = 2*i4 +1;
		int i42=3;		
		while(i42<i41){
			fm = fm*i42;
			i42=i42+2;
		}		
		return   fm;	
	}
	
} 

