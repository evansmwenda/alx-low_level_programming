#include "main.h"

/**
* _strlen - returns the length of the string
*
*@s: character pointer
*
* Return: length of the variable pointed to
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
