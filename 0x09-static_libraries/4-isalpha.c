#include "main.h"

/**
* _isalpha -  checks for alphabetic characters
*
* @c : c is an ascii character
*
* Return: 1 if alphabet, 0 if other
*/

int _isalpha(int c)
{
	if (c >= 65  && c <= 90)
	{
		return (1);
	}
	else if (c >= 97  && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
