#include<stdio.h>
double hanshuzhi (double d2,double a1,double b1,double c1,double d1);
int main(){
	//���ַ������ʽ���� 
	double a,b,c,d;//4��ϵ��
	double m,n;//2������˵�
	
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d); 
//	scanf("%lf",&d);//lf:��ȡdouble���������� 
	scanf("%lf %lf",&m,&n);
	
	//�����е�ֵ
	double  zdz = (m+n)/2; 
	double fm,fn,fz;//2���˵�ĺ���ֵ�������м�ĺ���ֵ
	int boolean  = 1;
	while(boolean ==1){	 
		fm = hanshuzhi(m,a,b,c,d); 
		fn = hanshuzhi(n,a,b,c,d); 
	//	fz = hanshuzhi(zdz,a,b,c,d); 
		
		//�ж�
		if((fm*fn)<0){
			fz = hanshuzhi(zdz,a,b,c,d); 
			if(fz==0){
				printf("%d",zdz);//�е�ֵ��Ҳ���ǽ� 
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
