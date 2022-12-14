#include "main.h"

/**
* print_last_digit - returns the value of the last digit
*
* @n: n is an ascii character
*
* Return: value of the last digit
*/

int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (n < 0)
		c = c * -1;
	_putchar(c);

	return (c);
}
