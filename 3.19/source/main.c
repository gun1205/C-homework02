#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float principal, rate, days, charge;
   
	printf("Enter loan principal (-1 to 100):");
	scanf_s("%f", &principal);

	while (principal != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &days);
        
		charge = principal*rate*days / 365;

		printf("The interest charge is $ %.2f\n", charge);

		printf("Enter loan principal (-1 to 100):");
		scanf_s("%f", &principal);
	}
	if (principal == -1)
	{
		return 0;
	}
}