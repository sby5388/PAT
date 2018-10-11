#include<stdio.h>
int main() 
{
	int n=0;
	scanf("%d",&n);
	
		int b=0;
		int c=0;
		int j=0; 
		//printf("aaa\n");
		int sheng=0;//¼×Ê¤ 
		int fu=0;//¼×¸º 
		int ping=0; //¼×Æ½ 
		char jia[n][2];
		char yi[n][2];
		int jiasheng[3];
		int yisheng[3];
		for(int i=0;i<3;i++)
		{
			jiasheng[i]=0;
			yisheng[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%s %s",&jia[i],&yi[i]);
			if(jia[i][0]=='B')
			{
				if(yi[i][0]=='B')
				{
					ping++; 
				}
				if(yi[i][0]=='C')
				{
					sheng++;
					b++; 
				}
				if(yi[i][0]=='J')
				{
					fu++;
					j++; 
				}				
			}
			if(jia[i][0]=='C')
			{
				if(yi[i][0]=='C')
				{
					ping++; 
				}
				if(yi[i][0]=='B')
				{
					fu++;
					b++; 
				}
				if(yi[i][0]=='J')
				{
					sheng++;
					c++; 
				}				
			}
			if(jia[i][0]=='J')
			{
				if(yi[i][0]=='J')
				{
					ping++; 
				}
				if(yi[i][0]=='B')
				{
					sheng++;
					j++; 
				}
				if(yi[i][0]=='C')
				{
					fu++;
					c++; 
				}				
			}
		}
		printf("%d %d %d\n",sheng,ping,fu);
		printf("%d %d %d\n",fu,ping,sheng);
	
	return 0;
}
