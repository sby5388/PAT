
/*
2��������5�֣�
��Ŀ���ݣ�
��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
������1234���������
yi er san si
ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո�
����������ʱ��������Ŀ�ͷ���ϡ�fu������-2341���Ϊ��
fu er san si yi
�����ʽ:
һ����������Χ��[-100000,100000]��
�����ʽ��
��ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�

����������
-30
���������
fu san ling
*/
#include<stdio.h>
#include<string.h>
void showChar(int position,int needSpace);
int main() {
	int number;
	int needSpace = 0;
	scanf("%d",&number);

	if(number==0) {
		showChar(0,needSpace);
		needSpace = 1;
		return 0;
	}

	int x=number;
	if(number<0) {
		showChar(-1,needSpace);
		needSpace = 1;
		x=0-number;
	}

	int ns = 0;
	int count = 0;
	while (x!=0) {
		int countt =x%10;
		count++;
		x=x/10;
		ns = ns*10 +countt;

	}

	int ns1 = ns;
	int count1=0;
	while(ns1!=0) {
		ns1/=10;
		count1++;
	}

	for(int i =0; i<count1; i++) {
		int w = ns%10;
		ns=ns/10;
		showChar(w,needSpace);
		needSpace = 1;
	}

	//�����������0�ĸ���
	if(count-count1) {
		do {
			showChar(0,needSpace);
			count1++;
		} while(count>count1);
	}
	return 0;

}
void showChar(int position,int needSpace) {
	char *number[] = {"fu","ling",
	                  "yi","er","san","si","wu",
	                  "liu","qi","ba","jiu"
	                 };
	if(needSpace) {
		printf(" ");
	}
	printf("%s",number[position+1]);
}

