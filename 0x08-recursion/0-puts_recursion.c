#include "main.h"

/**
*_puts_recursion-prints a string, followed by a new line
* @s: string array
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s + 0));
		_putchar((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}
}