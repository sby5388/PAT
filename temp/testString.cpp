#include<string.h>
#include<stdio.h>
int main() {
	char *forward = "string";
	printf("Beforestrrev():%s\n",forward);
	strrev(forward);
	printf("Afterstrrev():%s\n",forward);
	return 0;
}
