/*
��ϰ7-4 �ҳ������������鹲�е�Ԫ�� ��20 �֣�
���������������飬����Ҫ���ҳ��������߹��е�Ԫ�ء�

�����ʽ:
����ֱ��������и��������������飬ÿ���ȸ���������N����20���������N������������Կո�ָ���

�����ʽ:
��һ���а������ָ�����˳��������������鹲�е�Ԫ�أ����ּ��Կո�ָ�������ĩ�����ж���Ŀո�
��Ŀ��֤���ٴ���һ�����������֡�ͬһ���ֲ��ظ������

��������:
10 3 -5 2 8 0 3 5 -15 9 100
11 6 4 8 2 6 -5 9 0 100 8 1
�������:
3 5 -15 6 4 1
*/
#include<stdio.h>
#define return return
int main() {
	//TODO �������룡��ô���ظ��Ķ���
	int n;
	scanf("%d",&n);
	int number1[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&number1[i]);
	}
	int m;
	scanf("%d",&m);
	int number2[m];
	for(int i=0; i<m; i++) {
		scanf("%d",&number2[i]);
	}

	int first =1;
	for(int i=0; i<n; i++) {
		//�������ظ�
		int repeat = 0;
		for(int j=0; j<i; j++) {
			if(number1[i]==number1[j]) {
				repeat = 1;
				break;
			}
		}
		if(repeat==0) {
			//���ظ�

			int exist  = 0;
			for(int j=0; j<m; j++) {
				if(number1[i] == number2[j]) {
					exist = 1;
					break;
				}
			}
			if(exist == 0) {
				if(first ==1) {
					printf("%d",number1[i]);
					first = 0;
				} else {
					printf(" %d",number1[i]);
				}
			}
		}

	}

	//----------------
	for(int i=0; i<m; i++) {
		//�������ظ�
		int repeat = 0;
		for(int j=0; j<i; j++) {
			if(number2[i]==number2[j]) {
				repeat = 1;
				break;
			}
		}
		if(repeat==0) {
			//���ظ�

			int exist  = 0;
			for(int j=0; j<n; j++) {
				if(number2[i] == number1[j]) {
					exist = 1;
					break;
				}
			}
			if(exist == 0) {
				if(first ==1) {
					printf("%d",number2[i]);
					first = 0;
				} else {
					printf(" %d",number2[i]);
				}
			}
		}

	}



	return 0;
}

