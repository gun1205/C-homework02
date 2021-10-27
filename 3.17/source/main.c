#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float acount, balance, charges, credit, limit, newbalance;
	printf("Enter account number(-1 to end):");
	scanf_s("%f", &acount);

	while (acount != 0)
	{
		printf("Enter begining balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credit:");
		scanf_s("%f", &credit);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);

		newbalance = balance + charges - credit;

		printf("account: \t%.2f\n", acount);
		printf("credit limit: \t%.2f\n", limit);
		printf("balance: \t%.2f\n", balance);

		if (newbalance > limit)
			printf("credit limit exceeded\n");

		printf("Enter account number(-1 to end):");
		scanf_s("%f", &acount);
	}

	if (acount == -1)
	{
		return 0;
	}
}