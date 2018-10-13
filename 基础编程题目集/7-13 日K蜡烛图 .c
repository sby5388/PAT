/*
7-13 ��K����ͼ ��15 �֣�
��Ʊ�۸��ǵ����ƣ���������ͼ�����е�K��ͼ����ʾ��
��Ϊ���յ���K�ߡ����ܵ���K�ߡ����µ���K�ߵȡ�
����K��Ϊ����ÿ���Ʊ�۸�ӿ��̵���������һ�죬��Ӧһ������Сͼ��
Ҫ��ʾ�ĸ��۸񣺿��̼۸�Open�����ϸոտ�ʼ���������ɽ��ĵ�1�ʼ۸񣩡�
���̼۸�Close����������ʱ���һ�ʳɽ��ļ۸񣩡��м����߼�High����ͼ�Low��

���Close<Open����ʾΪ��BW-Solid��������ʵ���������򡱣���
���Close>Open����ʾΪ��R-Hollow�����������ĺ����򡱣���
���Open����Close����Ϊ��R-Cross��������ʮ�ֺ����򡱣���
���Low��Open��Close�ͣ���Ϊ��Lower Shadow������������Ӱ�ߡ�����
���High��Open��Close�ߣ���Ϊ��Upper Shadow������������Ӱ�ߡ�����
�����򣬸��ݸ������ĸ��۸���ϣ��жϵ��յ�������һ��ʲô��������

�����ʽ��
������һ���и���4����ʵ�����ֱ��ӦOpen��High��Low��Close������Կո�ָ���

�����ʽ��
��һ���������K��������͡�������ϡ���Ӱ�ߣ��������ͺ����with Ӱ�����͡��������Ӱ�߶��У������with Lower Shadow and Upper Shadow��

��������1��
5.110 5.250 5.100 5.105
�������1��
BW-Solid with Lower Shadow and Upper Shadow
��������2��
5.110 5.110 5.110 5.110
�������2��
R-Cross
��������3��
5.110 5.125 5.112 5.126
�������3��
R-Hollow
*/
#include<stdio.h>
#include<string.h>
int main() {
	double open,high,low,close;
	scanf("%f %f %f %f",&open,&high,&low,&close);

	char *first = "BW-Solid";
	char *first2 = "R-Hollow";
	char *first3 = "R-Cross";

	if(close>open) {
		first = first2;
	} else if(close==open) {
		first = first3;
	}

	printf("%s ",first);

	int low1 =  low<open && low<close;
	int high1 = high>open && high>close;

	if(low1||high1) {
		printf("with ");
	} else {
		printf("\n");
		return 0;
	}

	if(low1) {
		printf("Lower Shadow");
		if(high1) {
			printf(" and Upper Shadow");
		}
	} else {
		if(high1) {
			printf("Upper Shadow");
		}
	}
	printf("\n");
	return 0;
}
/*


1 1 1 1
10 12 11 13




*/
