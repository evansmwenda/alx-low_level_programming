#include "main.h"

/**
* malloc_checked - allcoate memory usingalloc
* @b - interger
* Return: char pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (98);

	return (ptr);
}
