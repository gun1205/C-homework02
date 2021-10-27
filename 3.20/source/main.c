#include <stdio.h>
#include <stdlib.h>
 
float hour, rate, salary;

int main(void)
{
	while (1==1)//µL≠≠¥`¿Ù
	{
		printf("Enter # of hours worked (-1 to end):");
	    scanf_s("%f", &hour);

		if (hour == -1)
		{
			break;
		}

		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);

		if (hour <= 40)
		{
			salary = hour * rate;

		}
		else if(hour>40)
		{
			salary = (40*rate)+((hour-40)*(rate*1.5));
		}

		printf("Salary is %.2f\n", salary);

	
	}

	system("pause");
	return 0;
	
}