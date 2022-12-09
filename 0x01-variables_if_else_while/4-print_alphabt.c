#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints alphabetical characters except letter q, e
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
        char i;
        for(i='a';i<='z';i++)
        {
		if (i != 'q' && i != 'e')
			putchar(i);
        }
        putchar('\n');
        return (0);
}
