#include<stdio.h>
int main()
{
	//��������
	//�о��������� 
	int n;
	scanf("%d",&n);//����ʱ�� 
	int lg = 3 * n;//�ڹ�ľ���
	int lt=0;//���ӵľ��� 
	
	int n1 = n/10;//10Ϊ��λ
	int n2 = n%10;
	int zhouqi = n1/9;
	int yu = n1%9;
	if(yu<2){
		yu = (yu*10 + n2) *9); 
	}else{
		if(yu>1&&yu<5){
		yu = 180;
		}else{
			if()
		}
	}
	
	
}
