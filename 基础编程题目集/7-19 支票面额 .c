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
void show(int N);
int main() {
//	int N;
//	scanf("%d",&N);
	//100y+f
	//n+200y+2f = 100f+y
	//n = 98f-199y

//	show(N);
	for(int i=-10; i<99; i++) {
		show(i);
	}

	return 0;
}
void show(int N) {
	{
		printf("\nN = %d   ",N);
	}

	int f =99;
	int y = 0;
	int result = 0;
	for(; f>0; f--) {
		for(y=99; y>0; y--) {
			if(N==(98*f - 199*y)) {
				if(f<49) {
					result = 1;
					printf("%d.%d",y,f);
					{
						int new_ = 100*f +y;
						int old_ = 100*y +f;
						if((new_-N)==old_*2) {
							printf("\t true");
						} else {
							printf("\t false");
						}
					}

					break;
				}

			}
		}
	}
	if(!result) {
		printf("No Solution");
	};
}


