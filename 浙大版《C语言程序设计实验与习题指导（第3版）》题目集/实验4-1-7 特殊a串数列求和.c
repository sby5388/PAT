/*
ʵ��4-1-7 ����a��������� ��20 �֣�
����������������9��������a��n��Ҫ���д������a+aa+aaa++...+aa..a��n��a��֮�͡�

�����ʽ��
������һ���и���������9��������a��n��

�����ʽ��
��һ���а��ա�s = ��Ӧ�ĺ͡��ĸ�ʽ�����

����������
2 3
���������
s = 246
*/
#include<stdio.h>
#define return return
int main(){
	int a,n;
	scanf("%d %d",&a,&n);
	int count  = 1;
	int sum = 0;
	for(int i=0;i<=n;i++){
		sum = sum*10 + count*i;
	}

	printf("s = %d",sum*a);

	return 0;
}
//2
//22
//222



