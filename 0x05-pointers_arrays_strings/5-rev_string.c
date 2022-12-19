#include "main.h"

/**
* rev_string - reverses the string entered
*
*@s: string pointer
*
* Return: void
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i / 2 ; j++)
	{
		c = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = c
	}
}
