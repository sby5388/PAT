#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  char c;
  //int letters=0,space=0,digit=0,others=0;
  //printf("please input some characters\n");
  int shuzu[10];
  while((c=getchar())!='\n')
  {
	if(c>='0'&&c<='9')
	{
		int c1=(int)atoi(c);
		shuzu[c1]++;
	}
    
  }
  //printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,space,digit,others);

  
  for(int i=0;i<10;i++)
  {
  	printf("%d ",shuzu[i]);
  }
  
  return 0;
}
