/*
�����ʽ��
�����һ�и��� 3 �����������ֱ�Ϊ��N����10^5����������������
L����60����Ϊ¼ȡ��ͷ����ߣ����·ֺͲŷ־������� L �Ŀ��������ʸ񱻿���¼ȡ��
H��<100����Ϊ����¼ȡ�ߡ����·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ���������࿼�����²��ִܷӸߵ�������
�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ�࿼��֮��
�²ŷ־����� H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š��ߣ����ܷ����򣬵����ڵڶ��࿼��֮��
�����ﵽ����� L �Ŀ���Ҳ���ܷ����򣬵����ڵ����࿼��֮��

��� N �У�ÿ�и���һλ��������Ϣ��������׼��֤�� �·� �ŷ֣�����׼��֤��Ϊ 8 λ�������²ŷ�Ϊ���� [0, 100] �ڵ����������ּ��Կո�ָ���

�����ʽ��
�����һ�����ȸ����ﵽ��ͷ����ߵĿ������� M����� M �У�ÿ�а��������ʽ���һλ��������Ϣ��
������������˵���Ĺ���Ӹߵ������򡣵�ĳ�࿼�����ж����ܷ���ͬʱ��
����·ֽ������У����·�Ҳ���У���׼��֤�ŵ����������

����������
14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 82 77
10000006 83 76
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60
���������
12 
10000013 90 99
10000012 80 100
10000003 85 80
10000011 85 80
10000004 80 85
10000007 90 78
10000006 83 76
10000005 82 77
10000002 90 60
10000014 66 60
10000008 75 79
10000001 64 90
------------
14 60 80
99999901 64 90
99999902 90 60
99999911 85 80
99999903 85 80
99999904 80 85
99999905 82 77
99999906 83 76
99999907 90 78
99999908 75 79
99999909 59 90
99999910 88 45
99999912 80 100
99999913 90 99
99999914 66 60 

*/
#include<stdio.h>
#include<string.h>
int main() {

	//get inputs
	int N,low,high;
	scanf("%d %d %d",&N,&low,&high);
	int id[N];
	int defen[N];
	int caifen[N];
	int zongfen[N];
	/*��һ��*/
	int count_best = 0;
	/*�ڶ��࣬��ʤ�ţ�*/
	int count_better = 0;
	/*������ �ŵ¼��� */
	int count_good = 0;
	/*������ ����*/
	int count_zhazha = 0;
	/*ͨ������*/
	int count_ok = 0;


	for(int i=0; i<N; i++) {
		scanf("%d %d %d", &id[i], &defen[i], &caifen[i]);
		if(defen[i]>=low && caifen[i]>=low) {
			if(defen[i]>=high) {
				if(caifen[i]>=high) {
					count_best++;
				} else {
					count_better++;
				}
			} else {
				if(defen[i]>=caifen[i]) {
					count_good++;
				} else {
					count_zhazha++;
				}
			}

			zongfen[i] = defen[i]+caifen[i];
			count_ok++;
		} else {
			zongfen[i] = defen[i]=caifen[i] = 0;
		}
	}
	//out ok_number
	printf("%d\n",count_ok);

	//out best
	int maxID =0;
	int maxFen = 0;

	while(count_best>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(defen[i]>=high && caifen[i]>=high) {
					if(zongfen[i]>maxFen) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(zongfen[i]==maxFen) {
						if(defen[i]>defen[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						} else if(defen[i]==defen[maxID]) {
							if(id[i]<id[maxID]) {
								maxFen = zongfen[i];
								maxID = i;
							}
						}
					}
				}
			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_best--;
	}


	//out better
	maxID = 0;
	maxFen = 0;

	while(count_better>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(defen[i]>=high) {
					if(zongfen[i]>maxFen) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(zongfen[i]==maxFen) {
						if(defen[i]>defen[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						} else if(defen[i]==defen[maxID]) {
							if(id[i]<id[maxID]) {
								maxFen = zongfen[i];
								maxID = i;
							}
						}
					}
				}
			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_better--;
	}


	//out good
	maxID = 0;
	maxFen = 0;
	while(count_good>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(defen[i]>=caifen[i]) {
					if(zongfen[i]>maxFen) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(zongfen[i]==maxFen) {
						if(defen[i]>defen[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						} else if(defen[i]==defen[maxID]) {
							if(id[i]<id[maxID]) {
								maxFen = zongfen[i];
								maxID = i;
							}
						}
					}
				}

			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_good--;
	}

	//out zhazha
	maxID = 0;
	maxFen = 0;
	while(count_zhazha>0) {
		for(int i=0; i<N; i++) {
			if(zongfen[i]!=0) {
				if(zongfen[i]>maxFen) {
					maxFen = zongfen[i];
					maxID = i;
				} else if(zongfen[i]==maxFen) {
					if(defen[i]>defen[maxID]) {
						maxFen = zongfen[i];
						maxID = i;
					} else if(defen[i]==defen[maxID]) {
						if(id[i]<id[maxID]) {
							maxFen = zongfen[i];
							maxID = i;
						}
					}
				}
			}
		}
		printf("%d %d %d\n", id[maxID], defen[maxID], caifen[maxID]);
		zongfen[maxID] = 0;
		maxFen = 0;
		count_zhazha--;
	}




	return 0;
}
