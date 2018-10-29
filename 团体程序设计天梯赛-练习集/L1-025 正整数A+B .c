#include<stdio.h>
#include<string.h>
/**
题的目标很简单，就是求两个正整数A和B的和，其中A和B都在区间[1,1000]。稍微有点麻烦的是，输入并不保证是两个正整数。

输入格式：
输入在一行给出A和B，其间以空格分开。问题是A和B不一定是满足要求的正整数，有时候可能是超出范围的数字、负数、带小数点的实数、甚至是一堆乱码。

注意：我们把输入中出现的第1个空格认为是A和B的分隔。题目保证至少存在一个空格，并且B不是一个空字符串。

输出格式：
如果输入的确是两个正整数，则按格式A + B = 和输出。如果某个输入不合要求，则在相应位置输出?，显然此时和也是?。

输入样例1：
123 456
输出样例1：
123 + 456 = 579
输入样例2：
22. 18
输出样例2：
? + 18 = ?
输入样例3：
-100 blabla bla...33
输出样例3：
? + ? = ?
*/
int main() {
	//0-1-2-3----9:整数
	//48-49-50-51-----57:ASCII码值
	char A[5],B[5];
	int lengthA,lengthB;
	scanf("%s",&A);
	scanf("%s",&B);
	lengthA = strlen(A);
	lengthB = strlen(B);
	int rA = 1,rB =1;

	if(A[0]<='0'|| A[0]>'9') {
		rA = 0;
	} else {
		for(int i=1; i<lengthA; i++) {
			if(A[i]<'0'|| A[i]>'9') {
				rA = 0;
				break;
			}
		}
	}

	if(B[0]<='0'|| B[0]>'9') {
		rB = 0;
	} else {
		for(int i=1; i<lengthB; i++) {
			if(B[i]<'0'|| B[i]>'9') {
				rB = 0;
				break;
			}
		}
	}

	if(rA) {
		printf("%s",A);
	} else {
		printf("?");
	}
	if(rB) {
		printf(" + %s = ",B);
	} else {
		printf("?");
	}
	if(rA && rB) {
		int numA,numB;
		for(int i=0; i<lengthA; i++) {
			numA =numA*10 +A[i]-'0';
		}
		for(int i=0; i<lengthB; i++) {
			numB =numB*10 +B[i]-'0';
		}
		printf("%d",numA+numB);
	} else {
		printf("?");
	}
	return 0;
}
