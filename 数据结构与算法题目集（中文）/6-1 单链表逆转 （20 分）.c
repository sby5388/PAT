#include <stdio.h>
#include <stdlib.h>
/*
本题要求实现一个函数，将给定的单链表逆转。

L是给定单链表，函数Reverse要返回被逆转后的链表。
函数接口定义：
List Reverse( List L );
其中List结构定义如下：
*/

/* 存储结点数据 */
/* 指向下一个结点的指针 */
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
	/* 存储结点数据 */
	ElementType Data;
	/* 指向下一个结点的指针 */
	PtrToNode   Next;
};
typedef PtrToNode List;

/* 定义单链表类型 */
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Reverse( List L );
/**
输入样例：
5
1 3 4 5 2
输出样例：
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

/* 你的代码将被嵌在这里 */
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
