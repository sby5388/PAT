/*
����Ҫ����д������Ѹ����ķ��Ŵ�ӡ��ɳ©����״���������17����*����Ҫ�����и�ʽ��ӡ

*****
 ***
  *
 ***
*****
��ν��ɳ©��״������ָÿ��������������ţ�
���з������Ķ��룻�������з�������2��
�������ȴӴ�С˳��ݼ���1���ٴ�С����˳���������β��������ȡ�

��������N�����ţ���һ�����������һ��ɳ©��Ҫ���ӡ����ɳ©���õ������ܶ�ķ��š�
�����ʽ:
������һ�и���1��������N����1000����һ�����ţ��м��Կո�ָ���
�����ʽ:
���ȴ�ӡ���ɸ���������ɵ�����ɳ©��״�������һ�������ʣ��û�õ��ķ�������

��������:
19 *
�������:
*****
 ***
  *
 ***
*****
2

*/
#include<stdio.h>
int getMax(int kk);
int main() {
	int n=0;
	char c[2];
	scanf("%d %s",&n,&c);

	int min,max,maxi;
	int yu=0;
	for(int i=1;; i++) {
		min=getMax(i);
		max=getMax(i+1);
		if(min<=n && max>n) {
			maxi=i;
			yu=n-min;
			break;
		}
	}
	int len=2*maxi-1;//���������
	int shuzu[len];
	int len2=len;
	for(int i=0; i<len; i++) {
		if(i<=(maxi-1)) {
			shuzu[i]=len2;
			len2=len2-2;
		} else {
			shuzu[i]=shuzu[len-i-1];
		}
	}
	for(int i=0; i<len; i++) {
		int ling=((len-shuzu[i])/2);
		while(ling>0) {
			printf(" ");//����ո�
			ling--;
		}
		do {
			printf("%s",c);//���c
			shuzu[i]--;
		} while(shuzu[i]>0);
		printf("\n");
	}
	printf("%d",yu);

	return 0;
}
int getMax(int kk) {
	int k1;
	k1=2*kk*kk-1;
	return k1;
}


