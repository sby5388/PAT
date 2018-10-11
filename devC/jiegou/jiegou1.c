#include<stdio.h>
struct date{
	int year;
	int month;
	int day;
};
int main()
{
	//struct date today={2016,12,26};
	struct date today;
	today=(struct date){2016,12,26};
	printf("%i-%i-%i",today.year,today.month,today.day);
	return 0;
}
