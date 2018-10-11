#include <stdio.h>

#ifndef MAXN
#define MAXN 10


/**
����Ҫ��ʵ��һ����������N������Ԫ��S[]��ƽ��ֵ�����м���Ԫ�ص�����Ϊ�Զ����ElementType��
�����ӿڶ��壺
ElementType Average( ElementType S[], int N );
���и�������Ԫ�ش��������S[]�У�������N������Ԫ�ظ������ú����뷵��N��S[]Ԫ�ص�ƽ��ֵ����ֵҲ������ElementType���͡�
*/
typedef float ElementType;

ElementType Average( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Average(S, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
ElementType Average( ElementType S[], int N ){
	ElementType sum = 0.0f;
	for(int i=0;i<N;i++){
		sum+=S[i];
	}
	return sum/N;
}
#endif MAXN
