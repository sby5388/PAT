/*
ϰ��8-4 ���� ��20 �֣�
������Ϸ�������ģ���n����Χ��һȦ����˳���1��n��úš�
�ӵ�һ���˿�ʼ����������m��<n�������˳�Ȧ�ӣ�
��һ���˴�1��ʼ����������m�����˳�Ȧ�ӡ�
�����ȥ��ֱ���������һ���ˡ�

����Ҫ���д����������ÿ���˵��˳�˳���š�

�����ӿڶ��壺
void CountOff( int n, int m, int out[] );
����n�ǳ�ʼ������m����Ϸ�涨���˳�λ�Σ���֤ΪС��n������������
����CountOff��ÿ���˵��˳�˳���Ŵ�������out[]�С�
��ΪC���������±��Ǵ�0��ʼ�ģ����Ե�i��λ���ϵ����ǵ�out[i-1]���˳��ġ�

���в��Գ���������

����������
11 3
���������
4 10 1 7 5 2 11 9 3 6 8
*/
#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main() {
	int out[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	CountOff( n, m, out );
	for ( i = 0; i < n; i++ ){
		printf("%d ", out[i]);
	//	printf("%d \n",i);
	}
		
	printf("\n");

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void CountOff( int n, int m, int out[] ) {
	for(int i=0; i<n; i++) {
		out[i] = 0;
	}
	int index = 1;
	int count  = 0;
	while(index<=n) {
		for(int i=0; i<n; i++) {
			if(out[i]==0) {
				count++;
				if(count%m==0){
					out[i]=index;
					index++;
				}
			}
		}
	}
}

