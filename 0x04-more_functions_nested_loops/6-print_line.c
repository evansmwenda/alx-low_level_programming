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
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
