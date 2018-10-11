#include<stdio.h>
int main()
{
	int n,n1;
	scanf("%d",&n1);
	if(n1>0&&n1<7){
		n=n1;
		int w=n+4;
		int count=0;
		while(count<24){
			for(int i=n;i<w;i++){			
				for(int j=n;j<w;j++){
					for( int k=n;k<w;k++){
						if(j!=i&&j!=k&&k!=i){
							if(count%6!=0)	printf(" ");
							printf("%d%d%d",i,j,k);								
							if(count%6==5)	printf("\n");
							count++;
						}							
					}
				}
			}
		}		
	} 
	return 0;
}
