#include "main.h"

/**
* _puts - print string to stdout
*
*@str: is a string pointer
*
* Return: void
*/
void _puts(char *str)
{
		int i = 0;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
}
