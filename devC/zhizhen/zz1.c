#include<stdio.h>
int main() 
{
	char aaa='a';
	char *p=&aaa;
	printf("p�ĵ�ֵַ�ǣ�%p\n",&aaa);
	printf("p�ĵ�ֵַ�ǣ�%p\n",p);
	printf("p�ĵ�ַָ���ֵ�ǣ�%c\n",*p);
	printf("p�ĵ�ַָ���ֵ�ǣ�%c\n",aaa);
	
	//*p===aaa;
	//p====&aaa
	 
	return 0;
}
