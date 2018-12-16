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
				//last  不为空时
				while(last->next){
				//如果不是 最后一个，则下一个，相当于for-each 循环
				last = last->next;
			}
			//把 p 加到最后
			last->next = p;
			}else{
				//lst 为空时 ，
				head = last;
			}
			
		}
	} while(N!=-1);


	return 0;
}

