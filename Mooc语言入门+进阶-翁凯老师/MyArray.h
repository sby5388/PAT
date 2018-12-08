/*
可以增长的数据
*/
typedef struct _array {
	int size;
	int *array;
	struct _array* next;
} Array;
/*创建，长度*/
Array array_create(void);
/*释放空间*/
void array_free(Array *a);
/*获取长度*/
int array_size(const Array *a);
/**???*/
int* array_at(Array *a,int index);
/*使数组增大多个大小*/
void array_inflate(Array *a,int more_size);
/*set*/ 
void  array_set(Array *a,int index,int value);
/*get*/
int  array_get(Array *a,int index); 
