#include "main.h"

/**
* swap_int - swaps values of 2 integers
*
*@a: address of first integer
*@b: address of second integer
*
* Return: void
*/
void swap_int(int *a, int *b)
{	
	int temp = *a;
	*a = *b;
	*b = temp;
}
