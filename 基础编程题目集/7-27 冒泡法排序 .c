/*
7-27 ð�ݷ����� ��20 �֣�
��N����������С���������ð�����������������ģ�
��ͷ��β�Ƚ���������Ԫ�أ����ǰ���Ԫ�ش��������ĺ���Ԫ�أ��򽻻����ǡ�
ͨ��һ��ɨ�裬�����һ��Ԫ�رض�������Ԫ�ء�Ȼ����ͬ���ķ�����ǰ��N-1����Ԫ�ؽ��еڶ���ɨ�衣
�������ƣ����ֻ�账������Ԫ�أ�������˶�N����������

����Ҫ������������K��<N�������ɨ�����K�����м������С�

�����ʽ��
�����ڵ�1���и���N��K��1��K<N��100�����ڵ�2���и���N������������������ּ��Կո�ָ���

�����ʽ��
��һ�������ð������ɨ�����K�����м������У����ּ��Կո�ָ�����ĩβ�����ж���ո�

����������
6 2
2 3 5 1 6 4
���������
2 1 3 4 5 6
*/
#include<stdio.h>
void swap(int numbers[],int length,int position);
int main() {
	int N,count;
	scanf("%d",&N);
	scanf("%d",&count);
	int numbers[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&numbers[i]);
	}
	for(int i=0; i<count; i++) {
		swap(numbers,N,count);
	}
	printf("%d",numbers[0]);
	for(int i=1; i<N; i++) {
		printf(" %d",numbers[i]);
	}
	return 0;
}

void swap(int numbers[],int length,int position) {
	int temp = 0;
	for(int i=0; i<length-position; i++) {
		temp=numbers[i];
		if(numbers[i]>numbers[i+1]) {
			numbers[i]=numbers[i+1];
			numbers[i+1] = temp;
		}
	}
}



