#include <stdio.h>
//�ٶ����Ĵ𰸣��������վ���֪��count��ֵ����ô���ģ�����뵥�ʵĳ�����ҹ��� 
int main()
{
	char c;
	int firstflag=1;
	int count = 0;
	scanf("%c",&c);
	
	while(c != '.')
	{
		if(c == ' '){
			if(count != 0){
				if(firstflag==1)
				{
					printf("%d",count);
					firstflag=0;
				}
				else
					printf(" %d",count);
				count = 0;
			}
		}
		else
			count++;
		scanf("%c",&c);
	}
	if(count!= 0)
	{
		if(firstflag==1)         //�ո�.
			printf("%d",count);
		else
			printf(" %d",count);
	}
	return 0;
}

