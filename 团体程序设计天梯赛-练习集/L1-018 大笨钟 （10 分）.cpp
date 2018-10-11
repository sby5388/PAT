#include<stdio.h>
int main() {
	int hh,mm;
	scanf("%d:%d",&hh,&mm);

	if((hh>=0 && hh<=23)&&(mm>=0 && mm<=59)) {
		if(hh<12) {
			printf("Only ");
			if(hh<10){
				printf("0");
			}
			printf("%d",hh);
			if(mm<10){
				printf("0");
			}
			printf("%d.  Too early to Dang.",mm);			
		} else {
			if(hh>12) {
				if(mm==0) {
					hh=hh-12;
					for(int i=0; i<hh; i++) {
						printf("Dang");
					}
				} else {
					hh=hh-12;
					hh++;
					for(int i=0; i<hh; i++) {
						printf("Dang");
					}
				}
				
				
				
			} else {
				if(mm==0) {
					printf("Only %d:0%d.  Too early to Dang.",hh,mm);
				} else {
					printf("Dang");
				}
			}
		}
	}

	return 0;
}
