/*
7-84 �߿�׹��20 �֣�
Ƥ���ĳ�����߶��������£����غ󷴵���ԭ�߶ȵ�һ�룬
�����£��ٷ�������������˷�����
��Ƥ���ڵ�n�����ʱ���ڿ���һ���������پ��룿��n�η����ĸ߶��Ƕ��٣�

�����ʽ:
������һ���и��������Ǹ��������ֱ���Ƥ��ĳ�ʼ�߶Ⱥ�n�����ڳ����ͷ�Χ�ڡ�

�����ʽ:
��һ����˳�����Ƥ���n�����ʱ�ڿ��о����ľ��롢�Լ���n�η����ĸ߶ȣ�
�����һ���ո�ָ�������һλС������Ŀ��֤������������˫���ȷ�Χ��

��������:
33 5
�������:
94.9 1.0
*/
#include<stdio.h>
#include<math.h>
#define return return
int main() {
	double height,count;
	scanf("%lf %lf",&height,&count);
	double all = 0.0,last= 0;
	if(count>0) {
		all+=height;
		last  = height*1.0/(pow(2,count));
		while(count>1) {
			all+=height;
			count--;
			height = height*1.0/2;
		}
	}
	printf("%.1lf %.1lf",all,last);
	return 0;
}

