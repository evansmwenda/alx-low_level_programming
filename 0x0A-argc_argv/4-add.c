#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of arguments
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */


int main(int argc, char *argv[])
{
	int sum = 0, i, j;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
		return (1);
	}
	printf("%d\n", sum);
}
