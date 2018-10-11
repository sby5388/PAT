#include<stdio.h>
int main()
{
	//Open¡¢High¡¢Low¡¢Close
	float Open,High,Low,Close;
	scanf("%f %f %f %f",&Open,&High,&Low,&Close);
	if(Close<Open) printf("BW-Solid");
	if(Close>Open) printf("R-Hollow");
	if(Close==Open) printf("R-Cross");
	
	if(Low<Open&&Low<Close&&High>Open&&High>Close) printf(" with Lower Shadow and Upper Shadow");
	if(Low<Open&&Low<Close&&(High<=Open||High<=Close)) printf(" with Lower Shadow");
	if(High>Open&&High>Close&&(Low>=Open||Low>=Close)) printf(" with Upper Shadow");
//	if() printf("");
//	if() printf("");
	return 0;
}
