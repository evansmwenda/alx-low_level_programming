#include "main.h"

/**
* print_line - draws straight line
*
*@n: n is an integer
*
* Return: void
*/
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
