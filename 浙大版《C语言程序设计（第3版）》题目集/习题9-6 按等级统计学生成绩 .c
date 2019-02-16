/*
ϰ��9-6 ���ȼ�ͳ��ѧ���ɼ� ��20 �֣�
����Ҫ��ʵ��һ������ѧ���ɼ�������ȼ�����ͳ�Ʋ����������ļ򵥺�����

�����ӿڶ��壺
int set_grade( struct student *p, int n );
����p��ָ��ѧ����Ϣ�Ľṹ�������ָ�룬�ýṹ��Ķ���Ϊ��

struct student{
    int num;
    char name[20];
    int score;
    char grade;
};
n������Ԫ�ظ�����ѧ��num������name�ͳɼ�score�����Ѿ��洢�õġ�
set_grade������Ҫ����ѧ���ĳɼ�score������ȼ�grade��
�ȼ����ã�85��100ΪA��
70��84ΪB��
60��69ΪC��
0��59ΪD��
ͬʱ��set_grade����Ҫ���ز������������

���в��Գ���������

����������
10
31001 annie 85
31002 bonny 75
31003 carol 70
31004 dan 84
31005 susan 90
31006 paul 69
31007 pam 60
31008 apple 50
31009 nancy 100
31010 bob 78
���������
The count for failed (<60): 1
The grades:
31001 annie A
31002 bonny B
31003 carol B
31004 dan B
31005 susan A
31006 paul C
31007 pam C
31008 apple D
31009 nancy A
31010 bob B
*/
#include <stdio.h>
#define MAXN 10

struct student {
	int num;
	char name[20];
	int score;
	char grade;
};

int set_grade( struct student *p, int n );

int main() {
	struct student stu[MAXN], *ptr;
	int n, i, count;

	ptr = stu;
	scanf("%d\n", &n);
	for(i = 0; i < n; i++) {
		scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
	}
	count = set_grade(ptr, n);
	printf("The count for failed (<60): %d\n", count);
	printf("The grades:\n");
	for(i = 0; i < n; i++)
		printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
	return 0;
}

/*
85��100ΪA��
70��84ΪB��
60��69ΪC��
0��59ΪD��
*/

/* ��Ĵ��뽫��Ƕ������ */
int set_grade( struct student *p, int n ) {
	int count = 0;
	for(int i =0; i<n; i++) {
		struct student s = p[i];
		printf("%s\n",s.name);
		printf("%d\n",s.num);
		int num = s.score;
		if(num>=85) {
			p[i].grade = 'A';
		} else if(num>=70) {
			p[i].grade = 'B';
		} else if(num>=60) {
			p[i].grade = 'C';
		} else {
			p[i].grade = 'D';
			count++;
		}
	}
	return count;
}
