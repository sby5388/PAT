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
//没有考虑负数
//
int main() {
	int s[MAX] = {0};
	int n,m;
	scanf("%d %d",&n,&m);
	while(n!=0) {
		s[n]=m;
		scanf("%d %d",&n,&m);
	}
	s[0]=m;
	scanf("%d %d",&n,&m);
	while(n!=0) {
		s[n]+=m;
		scanf("%d %d",&n,&m);
	}
	s[0]+=m;

	int first = 1;
	for(int i=MAX-1; i>=2; i--) {

		if(first) {
			if(s[i]==1) {
				printf("x%d",i);
			} else if(s[i]==-1) {
				printf("-x%d",i);
			} else {
				printf("%dx%d",s[i],i);
			}
			first = 0;
		} else {

			if(s[i]==1) {
				printf("+x%d",i);
			} else if(s[i]==-1) {
				printf("-x%d",i);
			} else if(s[i]>0) {
				printf("+%dx%d",s[i],i);
			} else if(s[i]<0) {
				printf("%dx%d",s[i],i);
			}
		}
	}

	if(first==1) {
		if(s[1]==1||s[1]==-1) {
			printf("x");
			first=0;
		} else if(s[1]!=0) {
			printf("%dx",s[1]);
			first=0;
		}
	} else {
		if(s[1]==1) { //当i=1时一定就是x的一次幂，而这也要单独拿出来
			printf("+x");
		} else if(s[1]==-1) {
			printf("-x");
		} else if(s[1]>0) {
			printf("+%dx",s[1]);
		} else if(s[1]<0) {
			printf("%dx",s[1]);
		}
	}
	if(first==1&&s[1]!=0) {
		printf("%d",s[0]);
	} else {
		if(s[0]>0) {
			printf("+%d",s[0]);
		} else if(s[0]<0) {
			printf("%d",s[0]);
		}
	}



	return 0;
}

