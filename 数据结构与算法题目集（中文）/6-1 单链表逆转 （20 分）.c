#include <stdio.h>
#include <stdlib.h>
/*
����Ҫ��ʵ��һ���������������ĵ�������ת��

L�Ǹ�������������ReverseҪ���ر���ת�������
�����ӿڶ��壺
List Reverse( List L );
����List�ṹ�������£�
*/

/* �洢������� */
/* ָ����һ������ָ�� */
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
	/* �洢������� */
	ElementType Data;
	/* ָ����һ������ָ�� */
	PtrToNode   Next;
};
typedef PtrToNode List;

/* ���嵥�������� */
typedef PtrToNode List;

List Read(); /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲��� */

List Reverse( List L );
/**
����������
5
1 3 4 5 2
���������
1
2 5 4 3 1
*/

int main() {
	List L1, L2;
	L1 = Read();
	L2 = Reverse(L1);
	Print(L1);
	Print(L2);
	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
List Reverse( List L ) {
	List L2 = L->Next;
	int length = 0;
	while(L2) {
		length++;
		L2=L2->Next;
	}

	List *L3;
	L3 = (List *)malloc(sizeof(L));
	for(int i=0; i<length; i++) {
		
	}

}
