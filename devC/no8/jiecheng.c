#include<stdio.h>
int jiecheng(int k);
int main()
{
	//ʹ�õݹ麯��������׳�
	int  m=1;
	scanf("%d",&m);
	int ji = jiecheng(m);
	printf("%d",ji);
	return 0;
} 
int jiecheng(int k)
{
	int k1=1;
	if(k<0)
	{
		printf("��������"); 
	}else{
		if(k==1 ||k==0)
		{
			k1=1;	
		}else{
			k1=jiecheng(k-1)*k;
		}
		
	}
	
	
	return k1;
}
