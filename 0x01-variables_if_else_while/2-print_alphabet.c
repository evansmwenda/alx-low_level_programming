#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints alphabetical characters a-z in lowercase
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
