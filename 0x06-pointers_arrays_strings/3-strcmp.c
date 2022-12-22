#include "main.h"

/**
* _strcmp- compares two strings
*
*@s2: second string
*@s1: first string
*
* Return: results of the comparison
*/
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	if (s1 == s2)
		result = 0;
	else if (s1 > s2)
		result = 1;
	else
		result = -1;
	return (result);
}
