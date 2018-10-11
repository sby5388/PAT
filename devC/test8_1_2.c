#include <stdio.h>
//百度来的答案，但是我终究不知道count的值是怎么来的，如何与单词的长度相挂钩的 
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
		if(firstflag==1)         //空格.
			printf("%d",count);
		else
			printf(" %d",count);
	}
	return 0;
}

