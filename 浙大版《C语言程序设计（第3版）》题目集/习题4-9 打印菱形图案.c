/*
ϰ��4-9 ��ӡ����ͼ�� ��15 �֣�
����Ҫ���д���򣬴�ӡһ���߶�Ϊn�ġ��ɡ�*����ɵ�������ͼ����

�����ʽ:
������һ���и���һ����������n��

�����ʽ:
�����n���Ǻš�*����ɵ����Σ���������ʾ��ÿ���Ǻź��һ���ո�

��������:
7
�������:
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/
#include<stdio.h>
#include<math.h>
#define return return
int main() {
	int N;
	scanf("%d",&N);
	int mid = N/2;
	if(N>0&& N%2==1) {
		for(int i=0; i<N; i++) {
			int empty = (int)abs(i-mid);
			for(int j=0;j<empty;j++){
				printf("  ");
			}
			for(int j=0;j<N-2*empty;j++){
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}


