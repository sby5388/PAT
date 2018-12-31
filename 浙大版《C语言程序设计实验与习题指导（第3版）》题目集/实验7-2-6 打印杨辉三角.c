/*
实验7-2-6 打印杨辉三角 （20 分）
本题要求按照规定格式打印前N行杨辉三角。

输入格式：
输入在一行中给出N（1≤N≤10）。

输出格式：
以正三角形的格式输出前N行杨辉三角。每个数字占固定4位。

输入样例：
6
输出样例：
        1
       1   1
      1   2   1
     1   3   3   1
    1   4   6   4   1
   1   5  10  10   5   1
*/
#include<stdio.h>
#define return return
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		for(int j = N-i-1;j>0;j--){
			printf(" ");
		}
		printf("%4d\n",1);
	}

	return 0;
}

