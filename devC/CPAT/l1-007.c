#include<stdio.h>
void dushu(int k);
int main()
{
	int n=0;
	scanf("%d",&n);
	int n2=n;
	int count=0;
	do{
		n2=n2/10;
		count++;
	}while(n2>0);
	printf("%d\n",count);
	int shuzu[count];
	for(int i=0;i<count;i++)
	{
		shuzu[i]=0;
	}
	for(int i=0;i<count;i++)
	{
		printf("shuzu%d=%d\n",i,shuzu[i]);
	}
	
	int yu=0;
	int w=0;
	do{
		yu=n%10;
		shuzu[w]=yu;
		printf("shuzu[w]%d=%d\n",w,shuzu[w]);
		n=n/10;
		w++;
	}while(w<count);
	for(int jj=count;jj>0;jj--)
	{
		printf("最后%d\n",shuzu[jj]);
	}
	
	return 0;
}
void dushu(int k)
{
	
	switch(k)
	{#include<stdio.h>
void pingyin(int a);
int main()
{
	int number = 0;
	scanf("%d",&number);
	
	if(number==0)
	{
		pingyin(0);
	 } 
	int x=number;
	if(number<0){
		pingyin(-1);
		x=number*-1;
	} 
	
	//printf("x=%d\n",x);
	
	int ns = 0;
	int count = 0;
	///char c=' ';
	//number的逆序数
	while (x!=0)
	{
		int countt =x%10;
		count++;
		x=x/10;
		ns = ns*10 +countt;	
		
	}
	
	int ns1 = ns;
	int count1=0;
	while(ns1!=0)
	{
		ns1/=10;
		count1++;		
	}
	
	{
		int i;
		for(i =0;i<count1;i++)
		{
		
			int w = ns%10;
			ns=ns/10;
			pingyin(w);
		
			if(i<count1-1)
			{
				printf(" ");
			}
		
		}
//		printf("\n");
//		printf("i=%d\n",i);
//		printf("count1=%d\n",count1);
	}
	
	
	
	//最后用来补充0的个数 
	if(count-count1)
	{
		do{
			printf(" ");
			pingyin(0);
		//	printf("");
			count1++;
		}while(count>count1);
	}
	//printf("ns=%d\n",ns);
	//printf("count=%d\n",count);
	//printf("count1=%d\n",count1);
	return 0;
	
}
void pingyin(int a){
	switch (a)
	{
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		case 0:
			printf("ling");
			break;
		case -1:
			printf("fu ");
			break;			
	}
}
		
	
			case -1 : printf("fu") ;break;
			case 0 : printf("ling") ;break;
			case 1 : printf("yi");break;
			case 2 : printf("er");break;
			case 3 : printf("san");break;
			case 4 : printf("si");break;
			case 5 : printf("wu");break;
			case 6 : printf("liu");break;
			case 7 : printf("qi");break;
			case 8 : printf("ba");break;
			case 9 : printf("jiu");break;
			//case :printf("");break;
	
	}
}
