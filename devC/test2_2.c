#include<stdio.h> 
int main()
{
	int m = 0;
	scanf("%d",&m);
	int a = m/10;//十位 
	int b = m%10;//各位 
	
	
	
	{
		//S:个位 
		switch(b)
		{
			case 1:
				printf("Faint signals, barely perceptible,");
				break; 
			case 2:
				printf("Very weak signals,");
				break; 
			case 3:
				printf("Weak signals,");
				break; 
			case 4:
				printf("Fair signals,");
				break; 
			case 5:
				printf("Fairly good signals,");
				break; 
			case 6:
				printf("Good signals,");
				break; 
			case 7:
				printf("Moderately strong signals,");
				break; 
			case 8:
				printf("Strong signals,");
				break; 
			case 9:
				printf("Extremely strong signals,");
				break; 
			default:
				break;
		}
	}
	
	{
		//R:十位 
		switch(a)
		{
			case 1:
				printf(" unreadable.");
				break; 
			case 2:
				printf(" barely readable, occasional words distinguishable.");
				break; 
			case 3:
				printf(" readable with considerable difficulty.");
				break; 
			case 4:
				printf(" readable with practically no difficulty.");
				break; 
			case 5:
				printf(" perfectly readable.");
				break; 
			default:
				break;
			
		
		}
	}
	
	
	return 0;
}
