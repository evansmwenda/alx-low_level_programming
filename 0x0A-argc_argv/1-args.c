#include <stdio.h>

/**
 * main - prints count of arguments
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argc - 1);
	return (0);
}