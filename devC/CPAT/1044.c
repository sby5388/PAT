#include<stdio.h>
//��û�н��һ���س���ȡ�ַ��������� 
int main()
{
	/*
		�����˵�0�������˳�Ϊtret��
		����������1��12�Ļ����ķֱ�Ϊ��
					//jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec��
		�����˽���λ�Ժ��12����λ���ֱַ��Ϊ��
					//tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou��
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
