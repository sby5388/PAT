/*
��������������
*/
typedef struct _array {
	int size;
	int *array;
	struct _array* next;
} Array;
/*����������*/
Array array_create(void);
/*�ͷſռ�*/
void array_free(Array *a);
/*��ȡ����*/
int array_size(const Array *a);
/**???*/
int* array_at(Array *a,int index);
/*ʹ������������С*/
void array_inflate(Array *a,int more_size);
/*set*/ 
void  array_set(Array *a,int index,int value);
/*get*/
int  array_get(Array *a,int index); 
