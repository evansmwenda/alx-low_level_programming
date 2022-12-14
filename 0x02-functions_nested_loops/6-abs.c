#include "main.h"

/**
* _abs -  returns absolute value of number
*
* @n: n is an ascii character
*
* Return: absolute value
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
