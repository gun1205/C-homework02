#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;

	printf("A\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	//=========================================
	printf("B\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = i; j <= 10; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	//=========================================
	printf("C\n");
	for (i = 1; i <= 10; i++)
	{
		for (k = 1; k <= i - 1; k++)
		{
			printf(" ");
		}
		for (j = i; j <= 10; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	//=========================================
	printf("D\n");
	for (i = 1; i <= 10; i++)
	{
		for (k = 10; k > i; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}


	return 0;
}

