#include <stdio.h>
#include <math.h>
/*
����Ҫ��ʵ��һ���������ж���һ��������N�Ƿ�����������������ȫƽ����������������λ������ͬ����144��676�ȡ�

�����ӿڶ��壺
int IsTheNumber ( const int N );
����N���û�����Ĳ��������N������������ú������뷵��1�����򷵻�0��

*/
int IsTheNumber ( const int N );

int main() {
	int n1, n2, i, cnt;

	scanf("%d %d", &n1, &n2);
	cnt = 0;
	for ( i=n1; i<=n2; i++ ) {
		if ( IsTheNumber(i) )
			cnt++;
	}
	printf("cnt = %d\n", cnt);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int IsTheNumber ( const int N ){
	
	int n = N;
	if(n<0){
		return 0;
	}
	
	int temp = (int)sqrt(n);
	
	if(temp*temp !=n ){
		return 0;
	}
	//Ӧ���ο���6.6  ʹ�õ�����֮��� 
	int length = 0;
	while(n>0){
		length++;
		n=n/10;
	}
	n=N;
	int result[length];
	for(int i=0;i<length;i++){
		result[i] = -1;
	}
	int position =0;
	while(n>0){
		result[position] = n%10;
		n=n/10;
		position++;
	}

	for(int i=0;i<length-1;i++){
		for(int j=i+1;j<length;j++){
			if(result[i]==result[j] && result[i]!=-1){
					return 1;
			}
		}
	}
	
	return 0;
}

