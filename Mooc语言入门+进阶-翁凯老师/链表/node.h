#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node{
	int value;
	//下一个指向这种类型的指针
	struct _node *next;
}Node;

#endif
