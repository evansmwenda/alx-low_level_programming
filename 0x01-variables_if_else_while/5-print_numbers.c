#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints single digit numbers
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
        int i=48;
        while(i < 58)
        {
                putchar(i);
		i++;
        }
        putchar('\n');
        return (0);
}
