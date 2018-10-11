#include<stdio.h>
#include<string.h>
int main() {
	char c1[61]="3485djUkAxh4hhGF";
	char c2[61]="2984akUfAkkkkggFdsb";
	char c3[61]="s&hgsfdk";
	char c4[61]="d&Hyscvnm";
//	char c1[61];
//	char c2[61];
//	char c3[61];
//	char c4[61];
//	scanf("%s",&c1);
//	scanf("%s",&c2);
//	scanf("%s",&c3);
//	scanf("%s",&c4);
	int k1=strlen(c1);
	int k2=strlen(c2);
	int k3=strlen(c3);
	int k4=strlen(c4);
	int l1=k1;
	int l2=k3;
	if(k1>k2) {
		l1=k2;
	}
	if(k3>k4) {
		l2=k4;
	}
	int xq=0;//ÐÇÆÚ
	int xs=0;//Ð¡Ê±
	int count=0;
	for(int i=0; i<l1+1; i++) {
		if(c1[i]==c2[i]&&c1[i]>='A'&&c1[i]<='Z') {
			xq=i;
			break;
		}
	}
	if(c1[xq]=='A') printf("MON ");
	if(c1[xq]=='B') printf("TUE ");
	if(c1[xq]=='C') printf("WED ");
	if(c1[xq]=='D') printf("THU ");
	if(c1[xq]=='E') printf("FRI ");
	if(c1[xq]=='F') printf("SAT ");
	if(c1[xq]=='G') printf("SUN ");
	for(int i=0; i<l1+1; i++) {
		if(c1[i]==c2[i] && c1[i]>='A' && c1[i]<='Z') {
			count++;
			if(count==2) {
				xs=i;
				break;
			}
		}
	}
	if(c1[xs]=='A') printf("10");
	if(c1[xs]=='B') printf("11");
	if(c1[xs]=='C') printf("12");
	if(c1[xs]=='D') printf("13");
	if(c1[xs]=='E') printf("14");
	if(c1[xs]=='F') printf("15");
	if(c1[xs]=='G') printf("16");
	if(c1[xs]=='H') printf("17");
	if(c1[xs]=='I') printf("18");
	if(c1[xs]=='J') printf("19");
	if(c1[xs]=='K') printf("20");
	if(c1[xs]=='L') printf("21");
	if(c1[xs]=='M') printf("22");
	if(c1[xs]=='N') printf("23");
	if(c1[xs]=='0') printf("0");
	if(c1[xs]=='1') printf("1");
	if(c1[xs]=='2') printf("2");
	if(c1[xs]=='3') printf("3");
	if(c1[xs]=='4') printf("4");
	if(c1[xs]=='5') printf("5");
	if(c1[xs]=='6') printf("6");
	if(c1[xs]=='7') printf("7");
	if(c1[xs]=='8') printf("8");
	if(c1[xs]=='9') printf("9");
	printf(":");
	int fz=0;
	for(int i=0; i<l2; i++) {
		if(c3[i]=='s'&&c3[i]==c4[i]) {
			fz=i;
			break;
		}
	}
	if(fz<10) {
		printf("0%d",fz);
	} else {
		printf("%d",fz);
	}
	return 0;
}
