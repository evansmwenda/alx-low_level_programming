#include "main.h"
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
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
