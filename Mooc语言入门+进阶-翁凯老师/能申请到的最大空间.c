/*

*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	//要初始化为0
	void *p = 0;
	int count = 0;
	
	
//	{ 
		//基本单位是kb,每次申请10Mb
		while((p=malloc(10*1024*1024))) {
			count++;
		}
		printf("分配到了%d0MB的空间",count);

//	}
	
	
	//只能对申请到的原先p 进行修改，能不能free修改后的指针
//	{
		//p=malloc(10*1024*1024);
		//p++;
		//释放
		//不可以重复释放 
		free(p);
//	}
	return 0;
}

