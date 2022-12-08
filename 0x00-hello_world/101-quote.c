#include <unistd.h>

/**
 * main - entry point
 *
 * Description: prints "and that piece of art is useful" to standard error
 *
 * return: Always 1 (Error)
 */

int main(void)
{
	write(1,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",60);
	return (1);	
}
