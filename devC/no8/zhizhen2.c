#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char *s="hello";
	//s[0]='2';
	char *s2="hello";
	char s3[]="hello";
	printf("&i=%p\n",&i);
	printf("s =%p\n",s);
	printf("s2=%p\n",s2);
	printf("s3=%p\n",s3);
	s3[1]='H';
	printf("s3[1]=%c\n",s3[1]);
} 
