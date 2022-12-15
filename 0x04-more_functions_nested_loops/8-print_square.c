#include "main.h"

/**
* print_square - prints a square of size size
*
*@size: size of the square
*
* Return: void
*/
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (b < size)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			b++;
		}
		_putchar('\n');
	}
}
