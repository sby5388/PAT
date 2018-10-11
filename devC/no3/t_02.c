#include <stdio.h> 
int main()
{
	int x = 0;
	int y = 0;
	printf("ÇëÊäÈëÕûÊıx\n");
	scanf("%d",&x);
	if(x<0)
	{
		y = -2 * x;	
	}else{
		if(x==0){
			y =0;
		}
		else{
			y = 2 * x; 
		}
	}
	printf("y=%d",y);
	return 0;
}
