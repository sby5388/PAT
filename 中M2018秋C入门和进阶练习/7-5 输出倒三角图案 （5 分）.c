/*
����Ҫ���д�������ָ�����ɡ�*����ɵĵ�����ͼ����

�����ʽ:
����Ŀû�����롣

�����ʽ:
�������и�ʽ����ɡ�*����ɵĵ�����ͼ����

* * * *
 * * *
  * *
   *
*/

#include<stdio.h>
int main() {
	char c = '*';
	for(int i=4; i>0; i--) {
		for(int j=i; j>0; j--) {
			if(j>1) {
				printf("%c ",c);
			} else {
				printf("%c",c);
			}
		}
		if(i>1) {
			printf("\n");
		}
		int k = 4-i+1;
		if(i>1) {
			for(; k>0; k--) {
				printf(" ");
			}
		}
	}
	return 0;
}
