/*
在C99标准之前声明数组(指针) 需要通过malloc（）向系统申请内存空间
*/
#include<stdio.h>
#include<stdlib.h> 
int main() {
	int N;
	int *a; 
	int i;
	scanf("%d",&N);
	//malloc  申请的空间，类型是（void*）,需要类型转换 
	a = (int*)malloc(N*sizeof(int));
	for(i =0;i<N;i++){
			scanf("%d",&a[i]);
	}
	//	while(N>0){
	//		scanf("%d",a);
	//		a++;
	//		N--;
	//	}
	
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	
	//动态申请内存的，要释放 
	free(a);
	
	return 0;
}

