#include "main.h"

/**
* _islower- checks if character is lower case
*
* @c: is an ascii character
*
* Return: 1 if lower, 0 if other
*/

int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
