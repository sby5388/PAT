/*
һ���ɹ�Աȥ���жһ�һ��yԪf�ֵ�֧Ʊ���������Ա�����fԪy�֡�
�ɹ�Ա��ȥ��n��֮��ŷ����д�����������������2yԪ2f�֣��ʸ�֧Ʊ����Ƕ��٣�

�����ʽ��
������һ���и���С��100��������n��

�����ʽ��
��һ���а���ʽy.f�����֧Ʊ��ԭʼ������޽⣬�����No Solution��

��������1��
23
�������1��
25.51
��������2��
22
�������2��
No Solution
*/
#include<stdio.h>
int main() {
	int N;
	scanf("%d",&N);
	//100y+f
	//n+200y+2f = 100f+y
	//n = 98f-199y
	int f =99;
	int y = 0;
	int result = 0;
	
	for(y=0;y<100;y++){
		for(f=y;f<100;f++){
			if((98*f-199*y)==N){
				printf("%d.%d",y,f);
				result = 1;
				break;
			}
		}
	} 
	
//	for(; f>0; f--) {
//		for(y=100; y>0; y--) {
//			if(N==(98*f - 199*y)) {
//				
//				printf("%d.%d",y,f);
//				result = 1;
//				break;
//			}
//		}
//	}
	if(!result) {
		printf("No Solution");
	}
	return 0;
}

