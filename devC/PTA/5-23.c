#include<stdio.h>
int main()
{
	char shuzi[10]={'a','b','c','d','e','f','g','h','i','j'};
	char shuwei[5]={'S','B','Q','W','Y','S','B','Q'};
//	printf("%c",shuwei[1]);
	int n=0;
	scanf("%d",&n);
	int n2=n;
	int count=0;
	int n1=0;
	int yu=0;
	do{
	//	yu=n%10;
		count++;
	//	n1=n1*10 + yu;
		n2=n2/10;
	}while(n2>0);
	int yuu[count];
	
	for(int i=0;i<count;i++)
	{
		yu=n%10;
		n=n/10;
		yuu[i]=yu;
	}
	
	
	printf("count=%d\n",count);
	for(int i=count;i>0;i++)
	{
		int k=yuu[i];
		int j=i%5;
		if(k!=0)
		{
			printf("%c",shuzi[k]);
			printf("%c",shuwei[j-1]);
		}
	
	}
	return 0;
}
/*
	����һ��������λ��������9λ������һ�������ֵ����λΪԪ������ת���ɲ���Ҫ��Ĵ�д���ĸ�ʽ��
	��23108Ԫ��ת�����ɡ�������ǪҼ����ơ�Ԫ��Ϊ�˼������
	��СдӢ����ĸa-j˳������д����0-9����S��B��Q��W��Y�ֱ����ʰ���١�Ǫ�����ڡ�
	����23108ԪӦ��ת�����Ϊ��cWdQbBai��Ԫ��
		�����ʽ��������һ���и���һ��������9λ�ķǸ�������
		�����ʽ����һ�������ת����Ľ����ע�⡰�㡱���÷������������ϰ�ߡ�
	��������1��813227345
	�������1��iYbQdBcScWhQdBeSf
	��������2��6900
	�������2��gQjB
*/
