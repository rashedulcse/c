/*INTEREST CALCULATION---FIG 1.5*/
#include<stdio.h>
#define PERIOD 10
#define CAPITAL 5500
/*MAIN PROGRAM BEGINS*/
int main()
{
	/*DECLARATION STATEMENT*/
	int year;
	double inrate, amount, value;
	/*ASSIGNMENT STATEMENTS*/
	amount = CAPITAL;
	inrate = .12;
	year = 1;
	printf("year     amount\n");
	/*CALCULATION STATEMENT---USING WHILE LOOP*/
	while(year <= 10){
		printf("%d       %.2lf\n", year, amount);
		value = amount + amount * inrate;
		year = year + 1;
		amount = value;\
		inrate = .11;
	}
	/*LOOP END*/
	return 0;
}
