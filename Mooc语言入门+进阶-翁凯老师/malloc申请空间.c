/*
��C99��׼֮ǰ��������(ָ��) ��Ҫͨ��malloc������ϵͳ�����ڴ�ռ�
*/
#include<stdio.h>
#include<stdlib.h> 
int main() {
	int N;
	int *a; 
	int i;
	scanf("%d",&N);
	//malloc  ����Ŀռ䣬�����ǣ�void*��,��Ҫ����ת�� 
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
	
	//��̬�����ڴ�ģ�Ҫ�ͷ� 
	free(a);
	
	return 0;
}

