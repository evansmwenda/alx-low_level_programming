#include "main.h"

/**
* _strcat - concatenates two strings
*
*@dest: pointer to destination
*@src: pointer to source
*
* Return: pointer to new string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
