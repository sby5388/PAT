#include<stdio.h>
//还没有解决一个回车获取字符串的问题 
int main()
{
	/*
		地球人的0被火星人称为tret。
		地球人数字1到12的火星文分别为：
					//jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec。
		火星人将进位以后的12个高位数字分别称为：
					//tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou。
	*/
	char ling[]="tret";
	char diwei[12][5]={"jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};	
	char gaowei[12][5]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	/*
	printf("diwei:");
	for(int i=0;i<12;i++)
	{
		printf("%s ",diwei[i]);
	}
	printf("\n");
	printf("gaowei:");
	for(int i=0;i<12;i++)
	{
		printf("%s ",gaowei[i]);
	}
	*/
	return 0;
}
