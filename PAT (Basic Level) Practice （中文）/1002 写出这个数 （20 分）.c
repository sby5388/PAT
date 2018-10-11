/*
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
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




