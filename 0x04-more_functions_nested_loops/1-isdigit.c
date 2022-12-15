#include "main.h"

/**
* _isdigit - checks if c is a digit
*
*@c: c is an either digit or character
*
* Return: 1 if digit
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
