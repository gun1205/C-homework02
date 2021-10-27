#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <=(5-i); j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (i*2-1); j++)
		{
			printf("*");
		}

		printf("\n");
	}
//===================================================
	for (i = 1; i <=4 ; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (5-i)*2-1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}


