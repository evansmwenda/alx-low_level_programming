#include "main.h"

/**
* leet- encodes a string into 1337
*
*@s: string to be encoded
*
* Return: encoded string
*/

char *leet(char *s)
{
	int i, j = 0;
	int uc[] = {65, 69, 79, 84, 76};
	int lc[] = {97, 101, 111, 116, 108};
	int n[] = {52, 51, 48, 55, 49}

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == uc[j] || s[i] == lc[j])
			{
				s[i] = n[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
