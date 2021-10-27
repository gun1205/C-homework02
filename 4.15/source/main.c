#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float principal, year, rate;
	char sign = '%';

	principal = 5000;
	for (year = 0; year <=15; year++)
	{
		rate = principal * 0.1;
		principal = principal + rate;
		printf("the interest of 10%c is %.2f\n", sign, rate);
	}
	printf("==================================================");
	
	principal = 5000;
	for (year = 0; year <=15; year++)
	{
		rate = principal * 0.105;
		principal = principal + rate;
		printf("the interest of 10.5%c is %.2f\n", sign, rate);
	}
	printf("==================================================");
	
	principal = 5000;
	for (year = 0; year <=15; year++)
	{
		rate = principal * 0.11;
		principal = principal + rate;
		printf("the interest of 11%c is %.2f\n", sign, rate);
	}
	printf("==================================================");
	
	principal = 5000;
	for (year = 0; year <=15; year++)
	{
		rate = principal * 0.115;
		principal = principal + rate;
		printf("the interest of 11.5%c is %.2f\n", sign, rate);
	}
	printf("==================================================");
	
	principal = 5000;
	for (year = 0; year <=15; year++)
	{
		rate = principal * 0.12;
		principal = principal + rate;
		printf("the interest of 12%c is %.2f\n", sign, rate);
	}

	return 0;
}