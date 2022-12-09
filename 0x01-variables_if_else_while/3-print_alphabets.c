#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints alphabetical characters a-zA-Z in lower,uppercases
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
        char i,j;
        for(i='a';i<='z';i++)
        {
                putchar(i);
        }
	for(j='A';j<='Z';j++)
        {
                putchar(j);
        }
	putchar('\n');
        return (0);
}

