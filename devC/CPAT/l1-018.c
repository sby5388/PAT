#include<stdio.h>
int main()
{
	int hh,mm;
	scanf("%d:%d",&hh,&mm);
//	printf("mm=%d\n",mm);
	if((hh>=0 && hh<=23)&&(mm>=0 && mm<=59))
	{
		if(hh<12)
		{
			if(hh<10&&mm>9)//²¹³ä0 
			{
				printf("Only 0%d:%d.  Too early to Dang.",hh,mm);
			}else
			{
				if(hh<10&&mm<10)
				{
					printf("Only 0%d:0%d.  Too early to Dang.",hh,mm);
				}else
				{
					if(hh>9&&mm<10)
					{
					//	printf("mm=%d",mm);
						printf("Only %d:0%d.  Too early to Dang.",hh,mm);
					}
					else
					{
						printf("Only %d:%d.  Too early to Dang.",hh,mm);
					}
				}
			}
		//	printf("Only %d:%d.  Too early to Dang.",hh,mm);
		}
		else
		{
			if(hh>12)
			{
				if(mm==0)
				{
					hh=hh-12;
					for(int i=0;i<hh;i++)
					{
						printf("Dang");
					}
				}
				else
				{
					hh=hh-12;
					hh++;
					for(int i=0;i<hh;i++)
					{
						printf("Dang");
					}
				}
			}
			else
			{
				if(mm==0)
				{
					printf("Only %d:0%d.  Too early to Dang.",hh,mm);
				}
				else
				{
					printf("Dang");
				}
			}
		}
	}
	
	return 0;
}
