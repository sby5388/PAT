/*
ʵ��2-3-5 �������-�����¶�ת���� ��15 �֣�
����2��������lower��upper��lower��upper��100���������һ��ȡֵ��ΧΪ[lower��upper]����ÿ������2���϶ȵĻ���-�����¶�ת����

�¶�ת���ļ��㹫ʽ��C=5��(F-32)/9�����У�C��ʾ�����¶ȣ�F��ʾ�����¶ȡ�

�����ʽ:
��һ��������2���������ֱ��ʾlower��upper��ֵ���м��ÿո�ֿ���

�����ʽ:
��һ�������"fahr celsius"

����ÿ�����һ�������¶�fahr�����ͣ���һ�������¶�celsius��ռ��6���ַ���ȣ����Ҷ��룬����1λС������

������ķ�Χ���Ϸ��������"Invalid."��

��������1:
32 35
�������1:
fahr celsius
32   0.0
34   1.1
��������2:
40 30
�������2:
Invalid.
*/
#include<stdio.h>
#define MAX 100
int main() {
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	if(lower<=upper && upper<=MAX) {
		printf("fahr celsius\n");
		while(lower<=upper) {
			printf("%d%6.1lf\n",lower,5.0*(lower-32)/9);
			lower+=2;
		}

	} else {
		printf("Invalid.");
	}
	return 0;
}


