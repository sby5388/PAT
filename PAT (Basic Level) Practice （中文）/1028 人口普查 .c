/*
ĳ��������˿��ղ飬�õ���ȫ���������ա�������д�������ҳ��������곤����������ˡ�

����ȷ��ÿ����������ڶ��ǺϷ��ģ�����һ���Ǻ���ġ���
������֪����û�г��� 200 ������ˣ��������� 2014 �� 9 �� 6 �գ�
���Գ��� 200 ������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���

�����ʽ��
�����ڵ�һ�и��������� N��ȡֵ��(0,10^5]��
��� N �У�ÿ�и��� 1 ���˵��������ɲ����� 5 ��Ӣ����ĸ��ɵ��ַ�������
�Լ��� yyyy/mm/dd������/��/�գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�

�����ʽ��
��һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���

����������
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
���������
3 Tom John
*/
#include<stdio.h>
#define MAX 20140906
#define MIN 18140906
struct person {
	char name[10];
	char data[20];
	int yy;
	int mm;
	int dd;
};
int isNormal(int year);
int main() {
	int N;
	scanf("%d",&N);
	int count  = 0;
	int min = 0;
	int max = 0;
	char *maxName;
	char *minName;
	for(int i=0; i<N; i++) {
		int y,m,d;
		char *temp;
		//TODO ���0���г�ʼ��
		scanf("%s %d/%d/%d",&temp,&y,&m,&d);
		//printf("%s \n",temp);
		int date = y*10000 + m*100 + d;
		if(isNormal(date)) {
			if(count==0) {
				min = max = date;
				minName = temp;
				maxName = temp;
			}
			count++;
			if(date>max) {
				max = date;
				maxName = temp;
			}
			if(date<min) {
				min = date;
				minName = temp;
			}
		}
	}

	printf("%d %s %s",count,maxName,minName);
	return 0;
}


int isNormal(int year) {
	//printf("year = %d \n",year);
	if(year > MAX || year < MIN) {
		return 0;
	}
	return 1;
}

















