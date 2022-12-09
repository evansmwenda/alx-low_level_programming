#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description - prints whether a number is positive or negative
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n");
	else if (n < 0)
		printf("%d is negative\n");
	else
		printf("%d is positive\n");
	return (0);
}
