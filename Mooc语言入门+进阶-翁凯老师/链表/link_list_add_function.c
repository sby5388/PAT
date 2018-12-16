/*

*/
#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#define return return
//����3��
typedef struct _list {
	Node* head;
} List;

/*
��������:
����1�����ݻ�����
*/
Node* add1(Node *head,int N);


/*
��������:
����2������һ��ָ��ָ���ָ��,��û�з���ֵ�Ѿ�û��ϵ��
*/
Node* add2(Node** head,int N);
/*
�������ݣ�
����3������һ���Զ���Ľṹ��
*/
void add3(List* pList,int N);

int main() {

	Node* head = NULL;
	//����3
	List list;
	list.head = NULL;
	int N;
	do {
		scanf("%d",&N);
		if(N!=-1) {
			//����0������ȫ�ֱ��������Ƽ�������ȫ���к�
			//����1�����ݻ�����
			//	head = add1(head,N);
			//����2:����ָ���ָ��
			//head = add2(&head,N);
			//����3�����ݽṹ��
			add3(&list,N);
		}
	} while(N!=-1);


	return 0;
}
/*
��������
*/
Node* add1(Node *head,int N) {

	Node *p = (Node*)malloc(sizeof(Node));
	p->value = N;
	p->next = NULL;
	//find the last
	Node *last = head;
	if(last) {
		//last  ��Ϊ��ʱ
		while(last->next) {
			//������� ���һ��������һ�����൱��for-each ѭ��
			last = last->next;
		}
		//�� p �ӵ����
		last->next = p;
	} else {
		//lst Ϊ��ʱ ��
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
		//last  ��Ϊ��ʱ
		while(last->next) {
			//������� ���һ��������һ�����൱��for-each ѭ��
			last = last->next;
		}
		//�� p �ӵ����
		last->next = p;
	} else {
		//lst Ϊ��ʱ ��
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
		//last  ��Ϊ��ʱ
		while(last->next) {
			//������� ���һ��������һ�����൱��for-each ѭ��
			last = last->next;
		}
		//�� p �ӵ����
		last->next = p;
	} else {
		//lst Ϊ��ʱ ��
		pList->head = last;
	}
}
