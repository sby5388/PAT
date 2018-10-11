/*
�±����й���������ѽ�ʱ�Ե�һ�ִ�ͳʳƷ����ͬ��������಻ͬ��ζ���±���
�ָ������������±��Ŀ���������ۼۡ��Լ��г�����������������������Ի�õ���������Ƕ��١�

ע�⣺����ʱ����ȡ��һ���ֿ�档
���������������������ģ�
���������� 3 ���±����������ֱ�Ϊ 18��15��10 ��֣�
���ۼ۷ֱ�Ϊ 75��72��45 ��Ԫ��
����г������������ֻ�� 20 ��֣�
��ô��������������Ӧ��������ȫ�� 15 ��ֵ� 2 ���±����Լ� 5 ��ֵ� 3 ���±������ 72 + 45/2 = 94.5����Ԫ����

�����ʽ��
ÿ���������һ������������ÿ�����������ȸ���һ�������� 1000 �������� N ��ʾ�±�����������
�Լ������� 500�������Ϊ��λ���������� D ��ʾ�г������������
���һ�и��� N ��������ʾÿ���±��Ŀ�����������Ϊ��λ����
���һ�и��� N ��������ʾÿ���±������ۼۣ�����ԪΪ��λ�������ּ��Կո�ָ���

�����ʽ��
��ÿ�������������һ�������������棬����ԪΪ��λ����ȷ��С����� 2 λ��

����������
3 20
18 15 10
75 72 45
���������
94.50
*/
#include<stdio.h>
void start(int prices[],int numbers[],int N ,int needs);
int main() {
	int N,needs;
	scanf("%d %d",&N,&needs);
	int allNumber = 0,allPrices =0;
	int prices[N],numbers[N];

	for(int i = 0; i<N; i++) {
		scanf("%d",&numbers[i]);
		allNumber+=numbers[i];
	}

	for(int i = 0; i<N; i++) {
		scanf("%d",&prices[i]);
		allPrices+=prices[i];
	}
	//������ڵ��ڴ��ʱ
	if(allNumber<=needs) {
		printf("%.2f",allPrices);
		return 0;
	}

	start( prices,numbers, N,needs );
	return 0;
}
void start(int prices[],int numbers[],int N ,int needs) {
	double sum = 0.0;
	double max = prices[0]*1.0/numbers[0];
	int maxId = 0;
	double temp = 0.0f;
	while(needs>0) {
		for(int i=0; i<N; i++) {
			temp =  prices[i]*1.0/numbers[i];
			if(temp>=max) {
				max = temp;
				maxId = i;
			}
		}
		if(needs>=numbers[maxId]) {
			sum+=prices[maxId];
		} else {
			sum+= prices[maxId]*1.0/numbers[maxId]*needs;
		}
		needs=needs - numbers[maxId];
		prices[maxId] = 0;
		maxId = 0;
		temp = 0.0f;
		max  = 0.0f;
	}
	printf("%.2lf",sum);

}
