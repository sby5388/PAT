/*
���� 2�����Ƚϣ�10�֣�
��Ŀ���ݣ�

����Ҫ���д���򣬱Ƚ����������Ĵ�С��

�����ʽ:
������һ���а��ա�a1/b1 a2/b2���ĸ�ʽ��������������ʽ����������
���з��Ӻͷ�ĸȫ��int���ͷ�Χ�ڵ���������

�����ʽ��
��һ���а��ա�a1/b1 ��ϵ�� a2/b2���ĸ�ʽ��������������Ĺ�ϵ��
���С�>����ʾ�����ڡ�����<����ʾ��С�ڡ�����=����ʾ�����ڡ���

ע���ڹ�ϵ��ǰ�����һ���ո�

����������
1/2 3/4
���������
1/2 < 3/4
*/
#include<stdio.h>
#define return return
int main() {
	int fz1,fm1;
	int fz2,fm2;
	scanf("%d/%d",&fz1,&fm1);
	scanf("%d/%d",&fz2,&fm2);

	printf("%d/%d",fz1,fm1);
//	int value = fz1*fm2 - fm1*fz2;
	double value  = fz1*1.0/fm1 - fz2*1.0/fm2;
	if(value>0) {
		printf(" > ");
	} else if(value==0) {
		printf(" = ");
	} else {
		printf(" < ");
	}
	printf("%d/%d",fz2,fm2);

	return 0;
}

