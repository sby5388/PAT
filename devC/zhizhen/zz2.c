#include<stdio.h>
int main(int argc,char* argv[])
{
	char aaa='a';
	char& aref=aaa;
	printf("aaa=%c\t aref=%c\n",aaa,aref);
	
	
	return 0;
}
