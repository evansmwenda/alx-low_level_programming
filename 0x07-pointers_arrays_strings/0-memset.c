#include "main.h"

/**
* _memeset- fills memory with a constant byte
* @s: string array
* @b: constant byte
* @n: number of bytes
* Return: pointer
*/

char *_memeset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
