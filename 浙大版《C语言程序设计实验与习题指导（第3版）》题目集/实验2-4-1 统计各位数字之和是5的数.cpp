#include <stdio.h>
/**
����Ҫ��ʵ������������һ�������жϸ����������ĸ�λ����֮���Ƿ����5��
��һ������ͳ�Ƹ����������ж��ٸ���������Ҫ�����������������Щ�����ĺ͡�
�����ӿڶ��壺
int is( int number );
void count_sum( int a, int b );
����is�ж�number�ĸ�λ����֮���Ƿ����5�����򷵻�1�����򷵻�0��
����count_sum���ú���isͳ�Ƹ�������[a, b]���ж��ٸ���������Ҫ��
����is����1������������������Щ�����ĺ͡�����ո�ʽ
count = ������������������, sum = ��Щ�����ĺ�
�����������Ŀ��֤0<a��b��10000��
*/

int is( int number );
void count_sum( int a, int b );

int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	if (is(a)) printf("%d is counted.\n", a);
	if (is(b)) printf("%d is counted.\n", b);
	count_sum(a, b);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int is( int number ) {
	int sum = 0;
	if(number<=0) {
		number=0-number;
	}
	while(number>0){
		sum+=number%10;
		number/=10;
	}
	if(sum==5){
		return 1;
	}else{
		return 0;
	}	
}
void count_sum( int a, int b ){
	int sum = 0 ;
	int count = 0;
	for(int i=a;i<=b;i++){
		if(is(i)){
			sum+=i;
			count++;
		}
	}
	
	printf("count = %d, sum = %d",count,sum);
}
