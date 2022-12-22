#include "main.h"

/**
* _strncpy - a function that copies a string.
*
*@dest: pointer to destination
*@src: pointer to source
*@n: integer with amount of bytes to copy
*
* Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;


	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
