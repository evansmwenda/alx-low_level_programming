#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -prints strings
 *
 * @n: number of numbers
 * @separator: string to print between
 *
 * Return void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *str;

	
	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && index != n - 1)
			printf("%s", separator);
	}
	
	va_end(ap);
	printf("\n");
}
