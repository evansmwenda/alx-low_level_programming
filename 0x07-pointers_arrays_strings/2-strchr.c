#include "main.h"
#define NULL 0

/**
* _strchr - locates a character in a string
* @s: string array
* @c: character to be located
* Return: pointer
*/


char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
