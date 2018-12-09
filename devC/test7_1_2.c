#include<stdio.h>
int main() {
	int shuzu[100]= {0};

	int cishu =99;
	int xishu=1;//声明幂的次数和系数，对应的一组输入值
	int count1=0;
	do {
		scanf("%d %d",&cishu,&xishu);
		shuzu[cishu]=shuzu[cishu]+xishu;
		if(cishu==0) {
			count1++;
		}


	} while(count1<2);//当次数为2时停止键入
	int count=0;
	//系数是1是，不用输出1
	for(int i=99; i>=0; i--) {
		if(shuzu[i]!=0) {
			//	printf("%d\n",i);
			if(i>1) {
				if(count==0) {
					if(shuzu[i]==1) {
						printf("%d",i);
						count++;
					} else {
						printf("%dx%d",shuzu[i],i);
						count++;
					}

				} else {
					printf("+%dx%d",shuzu[i],i);

				}
			} else {
				if(i==1) {

					printf("+%dx",shuzu[i]);
				} else {

					printf("+%d",shuzu[i]);
				}
			}

		}

	}

	return 0;
}
