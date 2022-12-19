#include "main.h"

/**
* puts_half - prints the second half of string
*
*@str: string pointer
*
* Return: void
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (n = i / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = ((i - 1) / 2) + 1; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');

}
