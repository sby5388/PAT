#include<stdio.h>
#include<string.h>
int main() {
	int n,l,h;
	int n1,l1,h1;
	scanf("%d %d %d",&n1,&l1,&h1);
	if(n1>0&&n1<100000&&l1>=60&&h1<100) {
		n=n1;
		l=l1;
		h=h1;
		char xuehao[n][9];
		int defen[n];
		int jige[n];
		int youxiu[n];
		int caifen[n];
		int zongfen[n];
		int jg=0; //及格人数
		int yx=0;//优秀人数
		for(int i=0; i<n; i++) {
			jige[i]=0;
			youxiu[i]=0;
			defen[i]=0;
			caifen[i]=0;
			zongfen[i]=0;
		}
		for(int i=0; i<n; i++) {
			scanf("%s %d %d",&xuehao[i],&defen[i],&caifen[i]);
			zongfen[i]=defen[i]+caifen[i];
			if(defen[i]>=l&&caifen[i]>=l) {
				jg++;
				jige[i]=1;
				if(defen[i]>=h&&caifen[i]>=h) {
					youxiu[i]=1;
					jige[i]=0;
					yx++;
				}
			}
		}

		printf("jige=%d\n",jg);
		printf("youxiu=%d\n",yx);
		jg=yx-jg;
		//输出总分最高的家伙
		//输出优秀的人
		do {
			int maxi=0;
			int max=zongfen[0];
			for(int i=0; i<n; i++) {
				if(youxiu[i]==1) {
					if(zongfen[i]>max) {
						max=zongfen[i];
						maxi=i;
					}
					if(zongfen[i]=max) {
						if(defen[i]>defen[maxi]) {
							max=zongfen[i];
							maxi=i;
						}
					}
				}
			}
			printf("---%s %d %d\n",xuehao[maxi],defen[maxi],caifen[maxi]);
			zongfen[maxi]=0;
			youxiu[maxi]=0;
			yx--;
		} while(yx>0);
		//输出及格但不优秀的人
		while(jg>0) {
			printf("输出及格\n");
			int maxi=0;
			int max=zongfen[0];
			for(int i=0; i<n; i++) {
				if(jige[i]==1) {

					if(zongfen[i]>max) {
						max=zongfen[i];
						maxi=i;
					}
					if(zongfen[i]=max) {
						if(defen[i]>defen[maxi]) {
							max=zongfen[i];
							maxi=i;
						}
					}
				}
			}
			printf("%s %d %d\n",xuehao[maxi],defen[maxi],caifen[maxi]);
			zongfen[maxi]=0;
			jige[maxi]=0;
			jg--;
		}

	}

	return 0;
}
