#include "main.h"

/**
* more_numbers - prints numbers 0-14
*
* Return: void
*/

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
