#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all numbers between n and 98
*
* @n: is a valid integer
*
* Return: integers together with commas
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("98\n");
}
