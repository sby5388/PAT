#include<stdio.h>
int main()
{
	//5-1 ¿Â√◊ªªÀ„”¢≥ﬂ”¢¥Á   (15∑÷)
	int limi=0;
	scanf("%d",&limi);
	double inch=(limi*1.0/100)/0.3048*12;
	int foot=inch/12;
	int inch1=(int)inch%12; 
	printf("%d %d",foot,inch1);
	return 0;
}
