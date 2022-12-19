#include <stdio.h>
#include "main.h"

/**
* print_array -print array of n characters
*
*@a: integer poitner to array
*@n: number of elements to print
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
