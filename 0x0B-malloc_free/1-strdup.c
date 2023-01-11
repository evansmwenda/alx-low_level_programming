#include <stdlib.h>
#include "main.h"

/**
* _strdup-returns a pointer to a newly allocated space in memory
* @str: string argument
* Return: char pointer
*/

char *_strdup(char *str)
{
	chr *ptr;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	while ((ptr[i] = str[i]) != '\0')
	{
		i++;
	}
	return (ptr);
}
