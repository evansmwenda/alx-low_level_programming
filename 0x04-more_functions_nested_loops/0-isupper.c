#include "main.h"

/**
*_isupper - checks if c is uppercase
*
*@c: c is an charater
*
* Return: 1 if uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
