/*

*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	//Ҫ��ʼ��Ϊ0
	void *p = 0;
	int count = 0;
	
	
//	{ 
		//������λ��kb,ÿ������10Mb
		while((p=malloc(10*1024*1024))) {
			count++;
		}
		printf("���䵽��%d0MB�Ŀռ�",count);

//	}
	
	
	//ֻ�ܶ����뵽��ԭ��p �����޸ģ��ܲ���free�޸ĺ��ָ��
//	{
		//p=malloc(10*1024*1024);
		//p++;
		//�ͷ�
		//�������ظ��ͷ� 
		free(p);
//	}
	return 0;
}

