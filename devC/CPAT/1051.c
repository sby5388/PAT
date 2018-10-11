#include<stdio.h>
int main()
{
	//¸´Êý³Ë·¨ 
	float a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	double s = a*c - b*d;
	double x = b*c + a * d;
	if(x<0)
	{
		printf("%.2f%.2fi",s,x);
	}else
	{
		printf("%.2f+%.2fi",s,x);
	}
	return 0;
}
