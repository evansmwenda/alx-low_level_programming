#include "main.h"

/**
* print_diagonal - prints numbers in a diagonal
*
*@n: n is character integer
*
* Return: void
*/
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
