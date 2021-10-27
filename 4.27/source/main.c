#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a, b, c;
	printf("500以內的勾股數有：\n");
	printf("   a    b    c\n");
	
	for (a = 1; a <= 500; a++)
		for (b = a; b <= 500; b++)
		{
			c = sqrt(a*a + b * b);  
			if (c*c == a * a + b * b && c <= 500)
			{
				printf("%4d %4d %4d\n", a, b, c);
			}
		}
	return 0;
}