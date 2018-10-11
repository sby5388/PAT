#include<stdio.h>
int main() 
{
	char aaa='a';
	char *p=&aaa;
	printf("p的地址值是：%p\n",&aaa);
	printf("p的地址值是：%p\n",p);
	printf("p的地址指向的值是：%c\n",*p);
	printf("p的地址指向的值是：%c\n",aaa);
	
	//*p===aaa;
	//p====&aaa
	 
	return 0;
}
