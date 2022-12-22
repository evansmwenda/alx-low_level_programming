#include "main.h"

/**
* reverse_array -  reverses an array
*
*@n: number of elements in array to reverse
*@a: array of integers
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int left, right, i;
	int half = n / 2;

	n = n - 1;


	for (i = 0; i < half; i++)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;
	}
}
