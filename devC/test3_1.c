#include<stdio.h>
int main()
{
	int number = 0;
	int jishu = 0;
	int oushu = 0;
	scanf("%d",&number);
	
	do{
		if(number>0){
			if(number%2==1){
				//ÆæÊı
				jishu++;
			}
			else{
				oushu++;
			}	
		}
		scanf("%d",&number);	 
	}while(number!=-1);
	printf("%d %d",jishu,oushu);
	return 0;
}
