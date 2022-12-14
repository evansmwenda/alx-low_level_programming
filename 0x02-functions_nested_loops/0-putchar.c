#include "alx.h"

/**
 * main - entry point
 *
 * Description: prints putchar to output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char name[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');

	return (0);
}
