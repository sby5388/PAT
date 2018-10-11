#include <stdio.h>
#include <stdlib.h>

/*
����Ҫ��ʵ��һ��������������L���Ľ׳˺͡�����Ĭ�����н���ֵ�Ǹ�������Ŀ��֤�����int��Χ�ڡ�

�����ӿڶ��壺
int FactorialSum( List L );
���е�����List�Ķ������£�
PtrToNode:ָ����� 
*/
typedef struct Node *PtrToNode;
struct Node {
    int Data; /* �洢������� */
    PtrToNode Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  
		L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int FactorialSum( List L ){
	int sum = 0;
    while (L != NULL) {
        int num = 1;
        int temp = L->Data;
        while (temp > 1) {
            num *= temp;
            temp--;
        }
        sum += num;
        L = L->Next;
    }
    return sum;
}

