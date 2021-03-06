/*
多项式加法（5分）
题目内容：

一个多项式可以表达为x的各次幂与系数乘积的和，比如：
2x6+3x5+12x3+6x+20
现在，你的程序要读入两个多项式，然后输出这两个多项式的和，也就是把对应的幂上的系数相加然后输
出。

程序要处理的幂最大为100。
输入格式:
总共要输入两个多项式，每个多项式的输入格式如下：
每行输入两个数字，第一个表示幂次，第二个表示该幂次的系数，所有的系数都是整数。第一行一定是最
高幂，最后一行一定是0次幂。
注意第一行和最后一行之间不一定按照幂次降低顺序排列；如果某个幂次的系数为0，就不出现在输入数
据中了；0次幂的系数为0时还是会出现在输入数据中。

输出格式：
从最高幂开始依次降到0幂，如：
2x6+3x5+12x3-6x+20

注意其中的x是小写字母x，而且所有的符号之间都没有空格，
如果某个幂的系数为0则不需要有那项。

输入样例：
6	2
5	3
3	12
1	6
0	20
6	2
5	3
2	12
1	6
0	20
输出样例：

4x6+6x5+12x3+12x2+12x+40

时间限制：500ms内存限制：32000kb
*/
#include<stdio.h>
#define MAX 101
#define return return
#include<stdio.h>
#include<math.h>

int main() {
    const int N = 101;
    int A[N];

    for ( int i = 0; i < N; i++) {
        A[i] = 0;
    }

    int endtag = 0;
    int n, a;
    while ( endtag < 2 ) {
        scanf("%d %d", &n, &a);

        if ( n == 0 ) {
            endtag ++;
        }

        if ( A[n] != 0 ) {
            A[n] += a;
        } else {
            A[n] = a;
        }
    }
    //判断最大幂
    int maxpower = 0;
    for ( int i = N; i > 0; i-- ) {
        if (A[i] != 0 ) {
            maxpower = i;
            break;
        }
    }
    //分只有0次幂和有非0次幂两种情况
    if (maxpower == 0) {
        printf("%d", A[0]); //如果只有0次幂，直接输出
    } else {
        for ( int i = maxpower; i > -1; i--) {
            //非0次幂分幂大于1，幂等于1，幂等于0三种情况，每种情况中又分系数绝对值为1和不为1两种情况。
            if ( i > 1) {
                if ( abs(A[i]) == 1 ) {
                    printf("x%d", i);
                } else if ( abs(A[i]) > 1 ) {
                    printf("%dx%d", abs(A[i]), i);
                }
            } else if (i == 1 ) {
                if ( abs(A[i]) == 1 ) {
                    printf("x");
                } else if ( abs(A[i]) > 1) {
                    printf("%dx", abs(A[i]));
                }
            } else {
                if ( A[i] != 0 ) {
                    printf("%d", abs(A[i]));
                }
            }
            //为方便理解，上面用的全部是绝对值，故需要添加运算符号。通过判断下一个非0系数添加符号。
            if ( i > 0){
                if ( A[i-1] > 0 ) {
                    printf("+");
                } else if ( A[i-1] < 0 ) {
                    printf("-");    //负数可不用绝对值，不额外输出负号，但为代码可读性，符号统一输出。
                }
            }
        }
    }

    return 0;
}

