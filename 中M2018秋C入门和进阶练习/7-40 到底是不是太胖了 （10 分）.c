/**
��˵һ���˵ı�׼����Ӧ��������ߣ���λ�����ף���ȥ100���ٳ���0.9���õ��Ĺ�������
��ʵ�������׼���������10%���ڶ���������ģ��� | ��ʵ���� ? ��׼���� | < ��׼���ء�10%����
��֪�н��ǹ�����������ָ���һȺ�˵���ߺ�ʵ�����أ�������������Ƿ�̫�ֻ�̫���ˡ�

�����ʽ��
�����һ�и���һ��������N���� 20����
���N�У�ÿ�и��������������ֱ���һ���˵����H��120 < H < 200����λ�����ף�
����ʵ����W��50 < W �� 300����λ���н������Կո�ָ���

�����ʽ��
Ϊÿ�������һ�н��ۣ������������ģ����You are wan mei!��
���̫���ˣ����You are tai pang le!���������You are tai shou le!��
����������
3
169 136
150 81
178 155
���������
You are wan mei!
You are tai shou le!
You are tai pang le!
*/












#include<stdio.h>
enum STATU {
    good,shou,pang
};
int getStatus(int H,int W);
void showStatus(int status);
int main() {
	int count = 0;
	scanf("%d",&count);
	int H[count],W[count];
	for(int i=0; i<count; i++) {
		scanf("%d",&H[i]);
		scanf("%d",&W[i]);
	}
	for(int i=0; i<count; i++) {
		showStatus(getStatus(H[i],W[i]));
	}
	return 0;
}

int getStatus(int H,int W) {
//	double max = (double)((H-100)*0.9 *1.1*2);
//	double min =  (double)((H-100)*0.9 *0.9*2);
//	printf("min = %.2lf\n",min);
//	printf("max = %.2lf\n",max);
//
//	if(W>=max) {
//		return pang;
//	}
//	if(W<=min) {
//		return shou;
//	}

	double value  = (H-100)*0.9*2;
	value  = (W-value)/value;
	if(value<=-0.10) {
		return shou;
	}
	if(value>=0.10) {
		return pang;
	}
	return good;
}
void showStatus(int status) {
	switch(status) {
		case good:
			printf("You are wan mei!");
			break;
		case shou:
			printf("You are tai shou le!");
			break;
		case pang:
			printf("You are tai pang le!");
			break;
		default :
			break;
	}
	printf("\n");

}
