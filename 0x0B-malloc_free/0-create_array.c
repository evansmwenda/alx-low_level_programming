#include <stdlib.h>
#include "main.h"

/**
* create_array- creates an array of chars,
* @size: number of command line arguments.
* @c: array that contains the program command line arguments.
* Return: char pointer
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *)malloc(sizeof(char) * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < size)
			{
				*(ptr + 1) = c;
				i++;
			}
			*(ptr + i) = '\0';
			return (ptr);
		}
	}
}
