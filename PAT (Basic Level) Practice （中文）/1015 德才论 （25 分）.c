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

*/
#include<stdio.h>
#include<string.h>
#define Max 9
#define A 1
#define B 2
#define C 3
#define D 4
#define E 0
//���г�ʱ
typedef struct MAN {
	int id;
	int de;
	int cai;
	int all;
	int type;
} Man;
int low,high;
int showClass(int de,int cai);
int compareMan(Man a,Man b);
int main() {
	//get inputs
	int N;
	scanf("%d %d %d",&N,&low,&high);
	Man mans[N];
	int countPass = 0;
	for(int i=0; i<N; i++) {
		scanf("%d %d %d", &mans[i].id, &mans[i].de, &mans[i].cai);
		mans[i].all = mans[i].de + mans[i].cai;
		mans[i].type = showClass(mans[i].de,mans[i].cai);
		if(mans[i].type!=0) {
			countPass++;
		}
	}

	for(int i=0; i<N-1; i++) {
		for(int j=i+1; j<N; j++) {
			Man man1 =mans[i];
			Man man2 = mans[j];
			int result = compareMan(man1,man2);
			if(result>0) {
				int all =man1.all;
				int cai = man1.cai;
				int de = man1.de;
				int type = man1.type;
				int id= man1.id;

				mans[i].all =man2.all;
				mans[i].id = man2.id;
				mans[i].de = man2.de;
				mans[i].cai = man2.cai;
				mans[i].type = man2.type;

				mans[j].all =all;
				mans[j].id = id;
				mans[j].de = de;
				mans[j].cai = cai;
				mans[j].type = type;
			}
		}
	}

	printf("%d\n",countPass);
	for(int i=0; i<N; i++) {
		Man man = mans[i];
		if(man.type!=0) {
			printf("%d %d %d\n", mans[i].id, mans[i].de, mans[i].cai);
		}
	}
	return 0;

}
int showClass(int de,int cai) {
	if(de>=low && cai>=low) {
		if(de>=high) {
			return cai>=high?A:B;
		} else {
			return de>=cai?C:D;
		}
	} else {
		return E;
	}
}
int compareMan(Man a,Man b) {
	if(a.type!=b.type) {
		return a.type - b.type;
	}
	if(a.all!=b.all) {
		return b.all-a.all;
	}
	if(a.de!=b.de) {
		return b.de-a.de;
	}
	return a.id - b.id;
}
