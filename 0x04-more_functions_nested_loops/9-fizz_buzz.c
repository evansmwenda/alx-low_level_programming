#include <stdio.h>

/**
* main- entry point for the program
*
* Description: prints 1 to 100 and fizz buzzes multiples of 3,5
*
* Return: numbers 1 to 100
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf('\n');
	return (0);
}
