#include "main.h"

/**
* print_to_98 - prints all numbers between n and 98
*
* @n: is a valid integer
*
* Return: integers together with commas
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (int i = n; i < 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (int i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}

	printf("98");
	printf("\n");
}
