#include<stdio.h>
double hanshuzhi (double d2,double a1,double b1,double c1,double d1);
int main(){
	//二分法求多项式单根 
	double a,b,c,d;//4个系数
	double m,n;//2个区间端点
	
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d); 
//	scanf("%lf",&d);//lf:获取double的类型输入 
	scanf("%lf %lf",&m,&n);
	
	//区间中点值
	double  zdz = (m+n)/2; 
	double fm,fn,fz;//2个端点的函数值，区间中间的函数值
	int boolean  = 1;
	while(boolean ==1){	 
		fm = hanshuzhi(m,a,b,c,d); 
		fn = hanshuzhi(n,a,b,c,d); 
	//	fz = hanshuzhi(zdz,a,b,c,d); 
		
		//判断
		if((fm*fn)<0){
			fz = hanshuzhi(zdz,a,b,c,d); 
			if(fz==0){
				printf("%d",zdz);//中点值：也就是解 
				boolean = 0;
			}else{
				if((fm*fz)>0){
					m=zdz;
				}
				if((fn*fz)>0){
					n=zdz;
				}
			} 
		}
		
		if((fm*fn)>0){
			printf("%d",n-m);
			boolean = 0;
		}
	}	
	
	return 0;
	
}
double hanshuzhi (double d2,double a1,double b1,double c1,double d1){
	double hsz = 0.0;
	hsz = a1*d2*d2*d2 + b1*d2*d2 + c1*d2 + d1;
	return hsz;
	
}
