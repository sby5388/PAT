#include<stdio.h>
#include<string.h>
/**
���Ŀ��ܼ򵥣�����������������A��B�ĺͣ�����A��B��������[1,1000]����΢�е��鷳���ǣ����벢����֤��������������

�����ʽ��
������һ�и���A��B������Կո�ֿ���������A��B��һ��������Ҫ�������������ʱ������ǳ�����Χ�����֡���������С�����ʵ����������һ�����롣

ע�⣺���ǰ������г��ֵĵ�1���ո���Ϊ��A��B�ķָ�����Ŀ��֤���ٴ���һ���ո񣬲���B����һ�����ַ�����

�����ʽ��
��������ȷ���������������򰴸�ʽA + B = ����������ĳ�����벻��Ҫ��������Ӧλ�����?����Ȼ��ʱ��Ҳ��?��

��������1��
123 456
�������1��
123 + 456 = 579
��������2��
22. 18
�������2��
? + 18 = ?
��������3��
-100 blabla bla...33
�������3��
? + ? = ?
*/
int main() {
	//0-1-2-3----9:����
	//48-49-50-51-----57:ASCII��ֵ
	char A[5],B[5];
	int lengthA,lengthB;
	scanf("%s",&A);
	scanf("%s",&B);
	lengthA = strlen(A);
	lengthB = strlen(B);
	int rA = 1,rB =1;

	if(A[0]<='0'|| A[0]>'9') {
		rA = 0;
	} else {
		for(int i=1; i<lengthA; i++) {
			if(A[i]<'0'|| A[i]>'9') {
				rA = 0;
				break;
			}
		}
	}

	if(B[0]<='0'|| B[0]>'9') {
		rB = 0;
	} else {
		for(int i=1; i<lengthB; i++) {
			if(B[i]<'0'|| B[i]>'9') {
				rB = 0;
				break;
			}
		}
	}

	if(rA) {
		printf("%s",A);
	} else {
		printf("?");
	}
	if(rB) {
		printf(" + %s = ",B);
	} else {
		printf("?");
	}
	if(rA && rB) {
		int numA,numB;
		for(int i=0; i<lengthA; i++) {
			numA =numA*10 +A[i]-'0';
		}
		for(int i=0; i<lengthB; i++) {
			numB =numB*10 +B[i]-'0';
		}
		printf("%d",numA+numB);
	} else {
		printf("?");
	}
	return 0;
}
