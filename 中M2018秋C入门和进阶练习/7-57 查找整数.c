/*
����Ҫ��������N�������в��Ҹ�����X������ҵ������X��λ�ã���0��ʼ���������û���ҵ��������Not Found����

�����ʽ��
�����ڵ�һ���и�������������N����20����X���ڶ��и���N�����������־������������ͣ�����Կո�ָ���

�����ʽ��
��һ�������X��λ�ã����ߡ�Not Found����

��������1��
5 7
3 5 7 1 9
�������1��
2
��������2��
5 7
3 5 8 1 9
�������2��
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

