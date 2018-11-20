/*
Êı×éµÄËÑË÷£º
*/
#include<stdio.h>
int search(int key,int a[],int length);
void testSearch();
int main() {
	testSearch();
	return 0;
}
int search(int key,int a[],int length) {
	int result  = -1;
	for(int i=0; i<length; i++) {
		if(a[i]==key) {
			result = i;
			break;
		}
	}
	return result;
}
void testSearch(){
	int a[] = {1,2,3,4,5,6,7,8,9,10,12,46,45,45,78};
	int key = 10;
	int position = search(key,a,sizeof(a)/sizeof(a[0]));

	printf("%d",position);
}
