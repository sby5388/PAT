/*
ϰ��10-1 �ж�������������λ�� ��15 �֣�
����Ҫ��ʵ��һ��������ͳ�Ƹ��������ڵ���λ��������λ������ͬ����ȫƽ��������144��676���ĸ�����

�����ӿڶ��壺
int search( int n );
���д���Ĳ���int n��һ����λ���������������λ���ַ�0����
����search����[101, n]�����������������������ĸ�����

���в��Գ���������

����������
500
���������
count=6
*/
#include <stdio.h>
#include <math.h>

int search( int n );

int main() {
	int number;

	scanf("%d",&number);
	printf("count=%d\n",search(number));

	return 0;
}


/* ��Ĵ��뽫��Ƕ������ */
int search( int n ) {
	int count = 0;
	for(int i=11;; i++) {
		int temp = i*i;
		if(temp>101&&temp<=n) {
			int a = temp/100;
			int b= temp/10%10;
			int c = temp%10;
			if(a==b ||b==c || a==c){
				count++;
			}

		}else{
			break;
		}
	}
	return count;


}

/*
101
110
011



*/
