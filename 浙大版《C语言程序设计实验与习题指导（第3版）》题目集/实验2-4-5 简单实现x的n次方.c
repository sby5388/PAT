#include <stdio.h>
/**
����Ҫ��ʵ��һ������x
?n
?? ��n��0���ĺ�����

�����ӿڶ��壺
double mypow( double x, int n );
����mypowӦ����x��n���ݵ�ֵ����Ŀ��֤�����˫���ȷ�Χ�ڡ�

*/

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

double mypow( double x, int n ){
	double result  = 1;
	while(n>0){
		result*=x;
		n--;
	}
	return result;
}
