#include<stdio.h>
#include<stdlib.h>
#include "MyArray.h"

const int BLOCK_SIZE =10;


int main() {
	Array a;
	a = array_create();
	array_set(&a,20,6);
	int number = array_get(&a,20);
	printf("%d\n",number);
	return 0;
}


/*创建，长度*/
Array array_create(void) {
	Array a;
	a.array = (int*)malloc(BLOCK_SIZE*sizeof(int));
	a.size = BLOCK_SIZE;
	a.next = 0;
	return a;
}
/*释放空间*/
void array_free(Array *a) {
	free(a->array);
	a->size = 0;
	if(a->next) {
		//todo 为何前后2次free?
		array_free(a->next);
		free(a->next);
	}
}
/*获取长度*/
int array_size(const Array *a) {
	if(!a->next) {
		return a->size;
	} else {
		return a->size+array_size(a->next);
	}

}
/*查找某个位置上的值，如果越界就申请空间*/
int* array_at(Array *a,int index) {
	if(index<a->size) {
		return &(a->array[index]);
	} else {
		if(!a->next) {
			return array_at(a->next,index-a->size);
		} else {
			if(index>=a->size) {
				array_inflate(a,index-a->size);
			}
			return &(a->array[index]);
		}
	}
}
/*使数组增大多个大小*/
/*todo  未实现新的*/
void array_inflate(Array *a,int more_size) {
	int *p  = (int*)malloc(sizeof(int)*(a->size+more_size));
	for(int i=0; i<a->size; i++) {
		p[i]=a->array[i];
	}

	a->array = p;
	a->size =a->size+more_size;
	array_free(a);
}

/*set*/
/*todo  未实现新的*/
void  array_set(Array *a,int index,int value) {
	if(index>=a->size) {
		array_inflate(a,index-a->size);
	}
	a->array[index] = value;
}
/*get*/
/*todo  未实现新的*/
int  array_get(Array *a,int index) {
	if(index>=a->size) {
		array_inflate(a,index-a->size);
	}
	return a->array[index];
}


