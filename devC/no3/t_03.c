#include <stdio.h>
using c99 std; 
int main(){
	int s0 = 0;
	int s = 0;
	for(int i=0;i<1000;i++){
		if(!i%2 == 0){
			s0 = s0 + i; 
		}else{
			s0 = s0 - i;
		}
	}
	s = 10 * s0;
	printf("s=%d",s);
	return 0;
}

