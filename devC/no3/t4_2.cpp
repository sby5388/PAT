#include <stdio.h>
//�ж�һ�����Ƿ�Ϊ���� 
int main()
{
	int x = 0;
	int ISsushu = 1;
	int i=2;
	printf("����һ������x,�ж��Ƿ�Ϊ����\n");
	scanf("%d",&x);
	printf("����x��%d:\n",x);
	if(x<=1){
		printf("%d��������Ҳ���Ǻ�����\n",x);
	}
	else{
		for(i=2;i<x;i++){
		   if(x%i ==0){
		    	ISsushu = 0;
		     	break;
	     	}
	   }
	   if(ISsushu == 0)
     	{
	 		printf("����x=%d��������",x); 
		 
		}
		else{
				printf("����x=%d������",x);
		} 
	}
	return 0;
} 
