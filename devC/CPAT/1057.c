#include<stdio.h>
#include<string.h>
int main()
{
	char c[10001];
	int shuzu[26];
	for(int i=0;i<26;i++)
	{
		shuzu[i]=0;
	}
	scanf("%s",&c);
//	printf("c=%s\n",c);
	int k=strlen(c);
//	printf("k=%d\n",k);
	int sum=0;
	for(int i=0;i<k;i++)
	{
		char t=c[i];
		if(t=='a'||t=='A') shuzu[0]=1;
		if(t=='b'||t=='B') shuzu[1]=1;
		if(t=='c'||t=='C') shuzu[2]=1;
		if(t=='d'||t=='D') shuzu[3]=1;
		if(t=='e'||t=='E') shuzu[4]=1;
		if(t=='f'||t=='F') shuzu[5]=1;
		if(t=='g'||t=='G') shuzu[6]=1;
		if(t=='h'||t=='H') shuzu[7]=1;
		if(t=='i'||t=='I') shuzu[8]=1;
		if(t=='j'||t=='J') shuzu[9]=1;
		if(t=='k'||t=='K') shuzu[10]=1;
		if(t=='l'||t=='L') shuzu[11]=1;
		if(t=='m'||t=='M') shuzu[12]=1;
		if(t=='n'||t=='N') shuzu[13]=1;
		if(t=='o'||t=='O') shuzu[14]=1;
		if(t=='p'||t=='P') shuzu[15]=1;
		if(t=='q'||t=='Q') shuzu[16]=1;
		if(t=='r'||t=='R') shuzu[17]=1;
		if(t=='s'||t=='S') shuzu[18]=1;
		if(t=='t'||t=='T') shuzu[19]=1;
		if(t=='u'||t=='U') shuzu[20]=1;
		if(t=='v'||t=='V') shuzu[21]=1;
		if(t=='w'||t=='W') shuzu[22]=1;
		if(t=='x'||t=='X') shuzu[23]=1;
		if(t=='y'||t=='Y') shuzu[24]=1;
		if(t=='z'||t=='Z') shuzu[25]=1;
	}
	for(int i=0;i<26;i++)
	{
		//printf("---shuchu---\n");
		int l=i+1;
		if(shuzu[i]==1)
		{
			sum=sum+l;
		}
	}
//	printf("sum==%d\n",sum);
	int yu=0;
//	int sum1=0;
	int count0=0;
	int count1=0;
	while(sum>0)
	{
		yu=sum%2;
//		printf("yu=%d\n",yu);
		if(yu==0)
		{
			count0++;
		}else
		{
			if(yu==1)
			{
				count1++;
			}
		}
		sum=sum/2;
	}
//	printf("sum1==%d\n",sum1);
	
	printf("%d %d\n",count0,count1);
	return 0;
}

