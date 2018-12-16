/*

*/
#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#define return return
//方法3：
typedef struct _list {
	Node* head;
} List;

/*
插入数据:
方法1：传递回自身
*/
Node* add1(Node *head,int N);


/*
插入数据:
方法2：传递一个指向指针的指针,有没有返回值已经没关系了
*/
Node* add2(Node** head,int N);
/*
插入数据：
方法3：传递一个自定义的结构体
*/
void add3(List* pList,int N);

int main() {

	Node* head = NULL;
	//方法3
	List list;
	list.head = NULL;
	int N;
	do {
		scanf("%d",&N);
		if(N!=-1) {
			//方法0：定义全局变量：不推荐，不安全，有害
			//方法1：传递回自身
			//	head = add1(head,N);
			//方法2:传递指针的指针
			//head = add2(&head,N);
			//方法3：传递结构体
			add3(&list,N);
		}
	} while(N!=-1);


	return 0;
}
/*
插入数据
*/
Node* add1(Node *head,int N) {

	Node *p = (Node*)malloc(sizeof(Node));
	p->value = N;
	p->next = NULL;
	//find the last
	Node *last = head;
	if(last) {
		//last  不为空时
		while(last->next) {
			//如果不是 最后一个，则下一个，相当于for-each 循环
			last = last->next;
		}
		//把 p 加到最后
		last->next = p;
	} else {
		//lst 为空时 ，
		head = last;
	}
	return head;
}


Node* add2(Node** pHead,int N) {

	Node *p = (Node*)malloc(sizeof(Node));
	p->value = N;
	p->next = NULL;
	//find the last
	Node *last = pHead;
	if(last) {
		//last  不为空时
		while(last->next) {
			//如果不是 最后一个，则下一个，相当于for-each 循环
			last = last->next;
		}
		//把 p 加到最后
		last->next = p;
	} else {
		//lst 为空时 ，
		pHead = last;
	}
	return pHead;
}


void add3(List* pList,int N) {

	Node *p = (Node*)malloc(sizeof(Node));
	p->value = N;
	p->next = NULL;
	//find the last
	Node *last = pList->head;
	if(last) {
		//last  不为空时
		while(last->next) {
			//如果不是 最后一个，则下一个，相当于for-each 循环
			last = last->next;
		}
		//把 p 加到最后
		last->next = p;
	} else {
		//lst 为空时 ，
		pList->head = last;
	}
}
