#include <stdio.h>
#include <math.h>
/*
本题要求实现一个函数，判断任一给定整数N是否满足条件：它是完全平方数，又至少有两位数字相同，如144、676等。

函数接口定义：
int IsTheNumber ( const int N );
其中N是用户传入的参数。如果N满足条件，则该函数必须返回1，否则返回0。

*/
int IsTheNumber ( const int N );

int main() {
	int n1, n2, i, cnt;

	scanf("%d %d", &n1, &n2);
	cnt = 0;
	for ( i=n1; i<=n2; i++ ) {
		if ( IsTheNumber(i) )
			cnt++;
	}
	printf("cnt = %d\n", cnt);

	return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber ( const int N ){
	
	int n = N;
	if(n<0){
		return 0;
	}
	
	int temp = (int)sqrt(n);
	
	if(temp*temp !=n ){
		return 0;
	}
	//应当参考上6.6  使用单链表之类的 
	int length = 0;
	while(n>0){
		length++;
		n=n/10;
	}
	n=N;
	int result[length];
	for(int i=0;i<length;i++){
		result[i] = -1;
	}
	int position =0;
	while(n>0){
		result[position] = n%10;
		n=n/10;
		position++;
	}

	for(int i=0;i<length-1;i++){
		for(int j=i+1;j<length;j++){
			if(result[i]==result[j] && result[i]!=-1){
					return 1;
			}
		}
	}
	
	return 0;
}

