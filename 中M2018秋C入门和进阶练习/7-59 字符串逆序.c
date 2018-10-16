/*

*/
#include<stdio.h>
#define MAX 80
int main() {
	char *str[MAX];
	scanf("%s",&str);
	//printf("%s",str);
	for(int i=MAX-1; i>0; i--) {
		if(str[i]!=NULL){
			printf("%s",*str[i]);
		}
	}
	return 0;
}

