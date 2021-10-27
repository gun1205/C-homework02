#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h, w, i, j;

	printf("input the rectangle's length and width");
	scanf_s("%d%d", &h, &w);

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			if (i == 0 || i == (h - 1) || j == 0 || j == (w - 1))
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}
	system("pause");
	return 0;
}

