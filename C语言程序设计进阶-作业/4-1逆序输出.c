/*
1���������10�֣�
��Ŀ���ݣ�

��ĳ�������һϵ�е���������Ԥ�Ȳ�֪����������������һ������-1���ͱ�ʾ���������
Ȼ�󣬰��պ������෴��˳����������������֣�����������ʶ������-1��

�����ʽ:
һϵ��������������-1��ʾ������-1������������ݵ�һ���֡�
�����ʽ��
�����������෴��˳��������е�������ÿ�����������һ���ո�
���������������֣�������������Ҳ�пո�

����������
1 2 3 4 -1
���������
4 3 2 1
*/
#include<stdio.h>
#include<stdlib.h>
#define return return
 typedef struct
const int MAX = 10000;
int main() {
	int numbers[MAX];
	for(int i=0; i<MAX; i++) {
		numbers[i] = 0;
	}
	int temp;
	scanf("%d",&temp);
	int index = 0;
	while(temp!=-1) {
		if(temp>0) {
			numbers[index] = temp;
			index++;
		}
		scanf("%d",&temp);
	}

	for(int i=index-1; i>=0; i--) {
		printf("%d ",numbers[i]);
	}

	return 0;
}

