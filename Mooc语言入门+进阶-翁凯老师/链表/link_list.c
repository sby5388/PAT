/*

*/
#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#define return return
int main() {

	Node * head = NULL;
	int N;
	do {
		scanf("%d",&N);
		if(N!=-1) {
			Node *p = (Node*)malloc(sizeof(Node));
			p->value = N;
			p->next = NULL;
			//find the last
			Node *last = head;
			if(last){
				//last  ��Ϊ��ʱ
				while(last->next){
				//������� ���һ��������һ�����൱��for-each ѭ��
				last = last->next;
			}
			//�� p �ӵ����
			last->next = p;
			}else{
				//lst Ϊ��ʱ ��
				head = last;
			}
			
		}
	} while(N!=-1);


	return 0;
}

