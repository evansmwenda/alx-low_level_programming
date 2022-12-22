#include "main.h"

/**
* _strncat - copies string into another n times
*
*@dest: pointer to destination
*@src: pointer to source
*@n: integer with amount of bytes to copy
*
* Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	
	while (dest[i] != '\0')
		i++;


	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
