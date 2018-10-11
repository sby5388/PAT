#include<stdio.h>
int zuida(int k,int n,int danjia[]);
int main() {
	int n,d;
	scanf("%d %d",&n,&d);
	int shuliang[n],zongjia[n];
	double danjia[n];

	for(int i=0; i<n; i++) {
		shuliang[n]=0;
		zongjia[n]=0;
		danjia[n]=0.0;
	}
	for(int i=0; i<n; i++) {
		scanf("%d",&shuliang[i]);
	}
	for(int i=0; i<n; i++) {
		scanf("%d",&zongjia[i]);
	}
	for(int i=0; i<n; i++) {
		danjia[i]=zongjia[i]*1.0/shuliang[i];
	}

	int maxd=0;
	int maxi=0;
	maxd=danjia[0];
	for(int i=0; i<n; i++) { //获取得最高的单价
		if(danjia[i]>=maxd) {
			maxd=danjia[i];
			maxi=i;
		}
	}
	double sum=0;
	while(d>0) {
		if(d>=shuliang[maxi]) {
			sum=sum+zongjia[maxi];
			d=d-shuliang[maxi];
//			danjia[maxi]=0;
			int maxi=zuida(maxi,n,*danjia[]);

		}
	}

	return 0;
}
int zuida(int k,int n,int danjia[]) {
	int k2=0;
	danjia[k]=0;
	int maxd=0;
//	int maxi=0;
	maxd=danjia[0];
	for(int i=0; i<n; i++) { //获取得最高的单价
		if(danjia[i]>=maxd) {
			maxd=danjia[i];
			k2=i;
		}
	}

	return k2;
}






