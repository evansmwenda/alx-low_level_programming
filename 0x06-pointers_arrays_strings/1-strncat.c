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

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
