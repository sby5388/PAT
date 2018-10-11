/*

*/
#include<stdio.h>
void start(int count[],int N);
int main() {
	int N;
	scanf("%d",&N);
	int count[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&count[i]);
	}

//	int N = 10;
	//int count[10] = {-10,1,2,3,4,-5,-23,3, 7, -21};
//	int count[10] = {-10,-1,2,-3,4,-5,-23,3, 7, -21};
//	int count[10] = {-10,-1,-2,-3,-4,-5,-23,-3, -7, -21};

	start(count,N);

	return 0;
}
void start(int count[],int N) {
	//全部是负数
	int allNegative = 1;
	int start,end;
	int sum ,temp;
	temp =start =end = sum = count[0];
	for(int i=0; i<N; i++) {
		temp = 0;
		for(int j=i; j<N; j++) {
			if(allNegative && count[j]>0) {
				allNegative = 0;
			}
			//printf("i = %d ,j = %d\n",i,j);
			temp+=count[j];
			if(count[j]==0) {
				end = count[j];
			} else
			
			 if(temp>sum) {
				sum =temp;
				start = count[i];
				end = count[j];
			}
		}
	}
	if(allNegative) {
		printf("%d %d %d",0,count[0],count[N-1]);
	} else {
		printf("%d %d %d",sum,start,end);
	}


}
