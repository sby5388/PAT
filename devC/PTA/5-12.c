#include<stdio.h>
int main()
{
	int n1,n2;
	char c[2];
	scanf("%d %s %d",&n1,&c,&n2);
	int count=0;
	if(c[0]=='+') { count=1; printf("%d",n1+n2);}
	if(c[0]=='-') { count=1; printf("%d",n1-n2);}
	if(c[0]=='*') { count=1; printf("%d",n1*n2);}
	if(c[0]=='/') { count=1; printf("%d",n1/n2);}
	if(c[0]=='%') { count=1; printf("%d",n1%n2);}
	if(count==0) printf("ERROR");
	return 0;
	
}
