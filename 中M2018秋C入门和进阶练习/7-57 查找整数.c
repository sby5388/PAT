/*
本题要求从输入的N个整数中查找给定的X。如果找到，输出X的位置（从0开始数）；如果没有找到，输出“Not Found”。

输入格式：
输入在第一行中给出两个正整数N（≤20）和X，第二行给出N个整数。数字均不超过长整型，其间以空格分隔。

输出格式：
在一行中输出X的位置，或者“Not Found”。

输入样例1：
5 7
3 5 7 1 9
输出样例1：
2
输入样例2：
5 7
3 5 8 1 9
输出样例2：
Not Found
*/
#include<stdio.h>
#define EMPTY "Not Found"
int main(){
  int N,answer;
  scanf("%d %d",&N,&answer);
  int position =-1;
  int temp;
  for(int i=0;i<N;i++){
    scanf("%d",&temp);
    if(temp==answer){
      position = i;
    }
  }
  if(-1==position){
    printf("%s",EMPTY);
  }else{
    printf("%d",position);
  }
  return 0;
}

