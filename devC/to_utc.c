#include<stdio.h>
int main(){
	//������� 
	int btc = 0;
	int i = 0;	 
	int utc = 0;

	
	//��ȡ����
	scanf("%d",&btc);
	i = btc/2400;
	btc = btc - 2400*i;
//	printf("%d\n",btc);
	if(btc>800){
		utc = btc - 800;
	}
	else{
		utc = btc + 1600;
	}
	printf("%d\n",utc); 
	return 0;
}
