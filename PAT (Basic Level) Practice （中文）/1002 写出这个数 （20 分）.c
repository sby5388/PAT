/*
����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��
ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10^100

�����ʽ��
��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/
#include<stdio.h>
#include<string.h>
void dushu(int n,int m);
int main() {
	char a[101];
	scanf("%s",&a);
	int k=strlen(a);
	int shuzu[10];
	int sum2=0,kk=0,sum=0,fff=0,yu=0,qian=0,hou=0;
	if(a[0]<=57&&a[0]>=48) {
		if(a[0]==48) {
			sum=0;
		} else {
			for(int i=0; i<k; i++) {
				char t=a[i];
				if(t>=48&&t<=57) {
					sum=sum+t-48;
				} else {
					sum=0;
					fff=1;
					break;
				}
			}
		}
		while(sum>0) {
			yu=sum%10;
			qian++;
			sum2=sum2*10+yu;
			sum=sum/10;
		}
		int sum3=sum2;
		while(sum3>0) {
			hou++;
			sum3=sum3/10;
		}
		if(fff!=1) {
			do {
				yu=sum2%10;
				dushu(yu,kk);
				kk++;
				sum2=sum2/10;
			} while(sum2>0);
			//---------
			while(qian-hou>0) {
				dushu(0,kk);
				hou++;
			}
		}
	}
	return 0;
}
void dushu(int n,int m) {
	if(m>0) {
		printf(" ");
	}
	switch(n) {
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		case -1:
			printf("fu");
			break;
		default :
			break;
	}
}




