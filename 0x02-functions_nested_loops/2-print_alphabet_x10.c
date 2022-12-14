#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	int i = 10;

	while (i < 10)
	{
		char c;

		for (c = "a"; c <= "z"; c++)
		{
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}
